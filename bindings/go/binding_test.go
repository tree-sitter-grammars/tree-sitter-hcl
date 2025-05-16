package tree_sitter_hcl_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_hcl "github.com/tree-sitter-grammars/tree-sitter-hcl/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_hcl.Language())
	if language == nil {
		t.Errorf("Error loading HCL grammar")
	}
}
