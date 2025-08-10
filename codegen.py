#!/usr/bin/env python3
# /// script
# requires-python = ">=3.13"
# dependencies = [
#     "caseutil",
# ]
# ///

# -*- coding: utf-8 -*-

from collections.abc import Iterable
import json
import argparse
import sys
from typing import TextIO, TypedDict, final
import caseutil

TEMPLATE_FILE = "template.py"


class NodeType(TypedDict):
    type: str
    named: bool


class Field(TypedDict):
    # Whether there can be multiple fields in this set
    multiple: bool
    required: bool
    types: list[NodeType]


# class Children(TypedDict):
#     multiple: bool
#     required: bool
#     types: list[NodeType]


class Entry(TypedDict):
    type: str
    named: bool
    fields: dict[str, Field] | None
    children: Field | None
    subtypes: list[NodeType] | None


@final
class Writer:
    def __init__(self, output: TextIO):
        self.spaces_per_indent = 4
        self.indent_spaces = 0
        self.output = output

    def indent(self):
        self.indent_spaces += self.spaces_per_indent

    def dedent(self):
        self.indent_spaces -= self.spaces_per_indent
        if self.indent_spaces < 0:
            raise ValueError("Indentation level cannot be negative")

    def __enter__(self):
        self.indent()

    def __exit__(self, type, value, traceback):
        self.dedent()

    def write(self, text: str) -> None:
        _ = self.output.write(" " * self.indent_spaces + text)

    # def writeln(self, text: str) -> None:
    #     _ = self.output.write(" " * self.indent_spaces + text + "\n")


def clazz(name: str, base: str | None = None) -> str:
    if not base:
        return f"class {name}:\n"
    return f"class {name}({base}):\n"


def lit_str(value: str) -> str:
    return f'"{value}"'


def str_lit_type(value: str | Iterable[str]) -> str:
    if isinstance(value, str):
        return generic("Literal", lit_str(value))
    return generic("Literal", *[lit_str(v) for v in value])


def generic(name: str, *args: str) -> str:
    if not args:
        return name
    return f"{name}[{', '.join(args)}]"


def func_call(name: str, *args: str) -> str:
    if not args:
        return name + "()"
    return f"{name}({', '.join(args)})"


def cast(type: str, value: str) -> str:
    return func_call("cast", type, value)


def dec(name: str) -> str:
    return f"@{name}\n"


def func_def(name: str, args: str | None = None, return_type: str | None = None) -> str:
    if not args:
        args = ""
    if not return_type:
        return_type = "None"
    return f"def {name}({args}) -> {return_type}:"

def quote[T: str|Iterable[str]](value: T) -> T:
    if isinstance(value, str):
        return lit_str(value)
    return [lit_str(v) for v in value]


# A mapping that tells us how to refer to a given type,
# e.g. "expression" -> "Expression"
# or "!=" -> UnnamedNode["!="]
type_map: dict[str, str] = {}
# Map from a type name to the reference to that type name string
# e.g. "expression" -> "SyntaxType.Expression"
# or "!=" -> Literal["!="]
type_name_map: dict[str, str] = {}
# The types of all named nodes
syntax_types: set[str] = set()
# The types of all unnamed nodes
unnamed_types: set[str] = set()

super_types: dict[str, set[str]] = {}


def write_children(writer: Writer, field: Field, only_named: bool = False) -> None:
    return_type = [type_map[field_type["type"]] for field_type in field["types"] if not only_named or field_type["named"]]
    return_type = " | ".join(return_type)
    if len(field["types"]) == 0:
        return
    # if field["multiple"]:
    return_type = f"list[{return_type}]"
    # if not field["required"]:
        # return_type = f"{return_type} | None"
    # if write_overloads_for_child:
    writer.write(dec("property"))
    writer.write(dec("override"))
    writer.write(
        func_def(
            "named_children" if only_named else "children",
            args="self",
            return_type=return_type,
        )
    )

    writer.write("  ...\n")
    writer.write("\n")


def write_fields(writer: Writer, fields: dict[str, Field]) -> None:
    first_child = True
    first_children = True
    num_fields_with_repeated_children = sum(
        1 for field in fields.values() if field["multiple"]
    )
    num_fields_without_repeated_children = (
        len(fields) - num_fields_with_repeated_children
    )
    write_overloads_for_children = num_fields_with_repeated_children > 1
    write_overloads_for_child = num_fields_without_repeated_children > 1

    for field_name, field in fields.items():
        if field["multiple"] and first_children:
            first_children = False
            writer.write("@override\n")
        if not field["multiple"] and first_child:
            first_child = False
            writer.write("@override\n")
        # writer.write("@overload\n")
        # If the field can have multiple nodes,
        # we should a) return a list, and b) overload the children_by_field_name method
        return_type = [type_map[field_type["type"]] for field_type in field["types"]]
        return_type = " | ".join(return_type)
        if field["multiple"]:
            return_type = f"list[{return_type}]"
        if not field["multiple"]:
            # We only add the " | None" for child_by_field_name because
            # children_by_field_name will always return a list, even if it is empty.
            if not field["required"]:
                return_type = f"{return_type} | None"
            if write_overloads_for_child:
                writer.write(dec("overload"))
            writer.write(
                func_def(
                    "child_by_field_name",
                    args=f"self, name: {str_lit_type(field_name)}, /",
                    return_type=return_type,
                )
            )
        else:
            if write_overloads_for_children:
                writer.write(dec("overload"))
            writer.write(
                func_def(
                    "children_by_field_name",
                    args=f"self, name: {str_lit_type(field_name)}, /",
                    return_type=return_type,
                )
            )

        writer.write("  ...\n")
    writer.write("\n")

def main():
    parser = argparse.ArgumentParser(
        description="Generate Python type stubs from a tree-sitter grammar.json file"
    )
    _ = parser.add_argument(
        "grammar_file",
        type=argparse.FileType("r"),
        help="Path to the tree-sitter grammar.json file",
    )
    _ = parser.add_argument(
        "--output",
        type=argparse.FileType("w"),
        default=sys.stdout,
        help="Output file for the generated Python stubs",
    )

    args = parser.parse_args()
    grammar_file: TextIO = args.grammar_file  # pyright: ignore[reportAny]
    output_file: TextIO = args.output  # pyright: ignore[reportAny]
    _ = output_file.seek(0)
    _ = output_file.truncate(0)  # Clear the output file before writing
    entries: list[Entry] = json.load(grammar_file)  # pyright: ignore[reportAny]

    for entry in entries:
        if entry["named"]:
            pascal_name = caseutil.to_pascal(entry["type"])
            type_map[entry["type"]] = pascal_name
            # type_name_map[entry["type"]] = f"SyntaxType.{pascal_name}"
            type_name_map[entry["type"]] = str_lit_type(entry["type"])
            syntax_types.add(entry["type"])
        else:
            unnamed_types.add(entry["type"])
            type_map[entry["type"]] = generic(
                "UnnamedNode", str_lit_type(entry["type"])
            )
            type_name_map[entry["type"]] = str_lit_type(entry["type"])
        if "subtypes" in entry:
            super_types[entry["type"]] = set()
            for subtype in entry.get("subtypes") or []:
                super_types[entry["type"]].add(subtype["type"])

    # Write out the types of named nodes into an enum
    writer = Writer(output_file)
    template_txt = open(TEMPLATE_FILE, "r").read()
    writer.write(template_txt)
    writer.write("\n\n")

    # writer.write(dec("final"))
    # writer.write(clazz("SyntaxType", "StrEnum"))
    # writer.indent()
    writer.write("type SyntaxType = ")
    writer.write(str_lit_type(syntax_types))
    # for syntax_type in syntax_types:
    #     writer.write(f"{}\n")
    # writer.dedent()
    writer.write("\n")
    # Write out the types of unnamed nodes into a union
    writer.write("type UnnamedType = ")
    writer.write(str_lit_type(unnamed_types))
    writer.write("\n\n")
    writer.write("type TypeString = SyntaxType | UnnamedType\n\n")

    for node_type in entries:
        # Unnamed types don't get a class
        if node_type["named"] is False:
            continue
        # Ignore super types since those will just be unions
        if node_type.get("subtypes"):
            continue
        base_class = "NamedNode" if node_type["named"] else "UnnamedNode"
        writer.write(
            clazz(
                caseutil.to_pascal(node_type["type"]),
                generic(base_class, type_name_map[node_type["type"]]),
            )
        )
        writer.indent()
        writer.write("...\n")
        write_fields(writer, node_type.get("fields") or {})
        if children := node_type.get("children"):
            write_children(writer, children, only_named=True)
            write_children(writer, children)
        writer.dedent()

    # Write out unions for super types
    for super_type, subtypes in super_types.items():
        if not subtypes:
            continue
        writer.write(
            f"type {caseutil.to_pascal(super_type)} = "
            + " | ".join(quote(type_map[subtype] for subtype in subtypes))
            + "\n"
        )
    # Write union of all types
    writer.write("type HclNode = " + " | ".join(type_map.values()) + "\n\n")


if __name__ == "__main__":
    main()

