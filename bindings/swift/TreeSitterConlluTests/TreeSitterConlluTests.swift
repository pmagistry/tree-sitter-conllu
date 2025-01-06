import XCTest
import SwiftTreeSitter
import TreeSitterConllu

final class TreeSitterConlluTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_conllu())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Conllu grammar")
    }
}
