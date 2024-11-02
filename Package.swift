// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterAsm6502",
    platforms: [.macOS(.v10_13), .iOS(.v11)],
    products: [
        .library(name: "TreeSitterAsm6502", targets: ["TreeSitterAsm6502"])
    ],
    dependencies: [],
    targets: [
        .target(
            name: "TreeSitterAsm6502",
            path: ".",
            exclude: [
                "Cargo.toml",
                "Makefile",
                "binding.gyp",
                "bindings/c",
                "bindings/go",
                "bindings/node",
                "bindings/python",
                "bindings/rust",
                "prebuilds",
                "grammar.js",
                "package.json",
                "package-lock.json",
                "pyproject.toml",
                "setup.py",
                "test",
                "examples",
                ".editorconfig",
                ".github",
                ".gitignore",
                ".gitattributes",
                ".gitmodules",
            ],
            sources: [
                "src/parser.c"
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")])
    ],
    cLanguageStandard: .c11
)
