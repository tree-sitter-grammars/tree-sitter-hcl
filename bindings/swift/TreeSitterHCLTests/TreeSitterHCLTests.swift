import XCTest
import SwiftTreeSitter
import TreeSitterHCL

final class TreeSitterHCLTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_hcl())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading HCL grammar")
    }
}
