let
  pkgs = import <nixpkgs> { };
in
pkgs.mkShell {
  name = "env";
  buildInputs = with pkgs; [
    nodejs
    tree-sitter
    emscripten
  ];
}

