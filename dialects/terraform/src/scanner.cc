#include "../../../src/scanner.cc"

extern "C" {

// tree sitter callbacks
void* tree_sitter_terraform_external_scanner_create() {
  return tree_sitter_hcl_external_scanner_create();
}

void tree_sitter_terraform_external_scanner_destroy(void* p) {
  return tree_sitter_hcl_external_scanner_destroy(p);
}

unsigned tree_sitter_terraform_external_scanner_serialize(void* p, char* b) {
  return tree_sitter_hcl_external_scanner_serialize(p, b);
}

void tree_sitter_terraform_external_scanner_deserialize(void* p, const char* b, unsigned n) {
  return tree_sitter_hcl_external_scanner_deserialize(p, b, n);
}

bool tree_sitter_terraform_external_scanner_scan(void* p, TSLexer* lexer, const bool* valid_symbols) {
  return tree_sitter_hcl_external_scanner_scan(p, lexer, valid_symbols);
}

} // extern "C"
