// Basic Instructions
// ^ comment
    lda #$10    // mnemonic
//  ^ keyword
//       ^ number

    sta $d020   // mnemonic with address
//  ^ keyword

    asl A       // accumulator instruction
//  ^ keyword
//      ^ constant.builtin

// Numbers
    .byte 42    // decimal
//        ^ number
    .byte $FF   // hex
//        ^ number
    .byte %101010 // binary
//        ^ number

// Strings
.text "Hello"   // normal string
//    ^ string
.text @"Hi\n"   // escaped string
//    ^ string

// Comments
// This is a comment
// <- comment
/* Multi-line
   comment */
// <- comment

// Labels
mylabel:        // simple label
//<- variable

.label screen = $0400  // directive label
//^ label
//     ^ variable

// Operators
lda #$10 + $20  // operator
//       ^ operator

// Directives
.text "String"   // directive
//    ^ string

// Value Types
.var bool = true    // boolean value
//          ^ variable
.var n = null       // null value
//       ^ variable

// Special Characters
* = $1000       // memory position
//^ punctuation.delimiter
