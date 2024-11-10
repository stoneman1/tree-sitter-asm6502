# Changelog

All notable changes to this project will be documented in this file.

The format is based on [Keep a Changelog](https://keepachangelog.com/en/1.0.0/),
and this project adheres to [Semantic Versioning](https://semver.org/spec/v2.0.0.html).

## [0.3.0] - 2024-01-10

### Added
- Support for method calls and function calls in directives
- Enhanced directive handling to support complex expressions
- Method call parsing for value types (e.g., `picture.getScreenRamSize()`)
- Nested function call support in directives
- Parameter handling for function calls
- Support for comma-separated method call arguments

### Changed
- Refactored directive parsing to handle method calls
- Improved handling of built-in functions and method calls
- Enhanced parameter handling in directives
- Updated AST structure for better method call representation
- Reorganized value type handling

### Fixed
- Directive parsing for complex expressions
- Method call argument handling
- Comma-separated value parsing in directives
- Conflicts in directive parsing with method calls

---

## [0.2.0] - 2024-01-09

### Added
- Support for accumulator addressing mode with specific mnemonics (asl, lsr, rol, ror, inc, dec)
- Register handling with `register_x` and `register_y` rules
- String support
  - Normal strings (`"..."`)
  - Escaped strings (`@"..."`)
  - All escape sequences (\n, \r, \t, \b, \f, \", \\, \$xx)
- Label directive support (`.label`)
- Global labels support (with `!`)
- Value types support
  - All KickAssembler value types
  - Complex type constructors (List, Matrix, Vector)
- Proper field names for better AST structure

### Fixed
- Accumulator token handling for both 'A' and 'a'
- String backslash handling in normal strings
- Colon-style labels parsing
- Number handling
  - Byte vs two-byte number precedence
  - Hex, decimal, and binary number formats
  - Float support
  - Number field names (byte, two_byte)
- Operator precedence in expressions
- Directive parameter handling

### Changed
- Improved code organization
  - Grouped related rules
  - Added section comments
  - Consistent formatting and naming
- Enhanced AST structure
  - Added descriptive field names
  - Consistent node structure
- Separated .text directive handling
