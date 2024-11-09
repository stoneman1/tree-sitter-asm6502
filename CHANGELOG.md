# Changelog

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
