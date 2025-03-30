// swift-tools-version:5.3

import PackageDescription

let package = Package(
    name: "TreeSitterHCL",
    platforms: [.macOS(.v10_13), .iOS(.v11)],
    products: [
        .library(name: "TreeSitterHCL", targets: ["TreeSitterHCL"]),
    ],
    dependencies: [
        .package(name: "SwiftTreeSitter", url: "https://github.com/tree-sitter/swift-tree-sitter", from: "0.25.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterHCL",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                "src/scanner.c"
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterHCLTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterHCL",
            ],
            path: "bindings/swift/TreeSitterHCLTests"
        )
    ],
    cLanguageStandard: .c11
)
