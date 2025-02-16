import XCTest
import SwiftTreeSitter
import TreeSitterHcl

final class TreeSitterHclTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_hcl())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Hcl grammar")
    }
}
