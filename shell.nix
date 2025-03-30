let
  pkgs = import <nixpkgs> { };
in
pkgs.mkShell {
  name = "env";
  buildInputs = with pkgs; [
    gdb
    valgrind
    nodejs
    emscripten
  ];
  shellHook = '' 
    npm install
    export PATH="$(git rev-parse --show-toplevel)/node_modules/.bin:$PATH"
  '';
}

