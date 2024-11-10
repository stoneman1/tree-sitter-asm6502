// Basic Instructions comment (comment [0, 0] - [0, 21])
// ^ comment
/*
(directive [2, 4] - [2, 29]
  value: (identifier [2, 8] - [2, 17])
  segment: (string [2, 18] - [2, 29]))
  */
    * = screenRAM "ScreenRAM"
//  ^ label
//    ^ punctuation.delimiter
//      ^ variable
//                ^ string
      .var picture = LoadBinary("test.kla", KOALA_TEMPLATE)
//    ^^^^^^^^^^^^^ label
//                 ^^ punctuation.delimiter
//                   ^^^^^^^^^^^ function
//                              ^^^^^^^^^^ string
//                                        ^^ punctuation.delimiter
//                                          ^^^^^^^^^^^^^^^^^ function

.label MUSIC_LOAD = $1000     // New location where we want the music
.label MUSIC_INIT = MUSIC_LOAD  // Init routine at start of music
.label MUSIC_PLAY = MUSIC_LOAD + $03  // Play routine is at +$03
//                  ^ label
//                             ^ operator
//                               ^ number

// Value Types
    .var bool = true    // boolean value
//  ^^^^^^^^^  label
//            ^ punctuation.delimiter
//              ^ variable
    .var n = null       // null value
//  ^^^^ label
    .var i = 42         // integer value
//  ^^^^ label
//       ^ variable
//           ^ number
    .var te = "lol"       // text
//  ^^^^ label
//       ^ variable
//            ^ string
// Special Characters
* = $1000       // memory position TODO: vaihta * väri

// Labels
   mylabel:        // simple label  (label [3, 0] - [3, 8] name: (identifier [3, 0] - [3, 7]))
// ^^^^^^^^ label

    .label screen=$0400  // directive label
//  ^^^^^^ label
//               ^ punctuation.delimiter
//         ^^^^^^ variable
//                ^ number

//.const KOALA_TEMPLATE = "C64FILE, Bitmap=$0000, ScreenRam=$1f40, ColorRam=$2328, BackgroundColor = $2710"
//.var picture = LoadBinary("spagfinalko2.kla", KOALA_TEMPLATE)

    .text "Hello"   // normal string
//  ^^^^^ label
//        ^ string
    .byte 42    // decimal
//   ^ label
//        ^ number
    lda #$10    //
//  ^ keyword
//      ^ number
//       ^ number
    lda #$10    // opcode (mnemonic operand absolute
//  ^ keyword
//      ^ number
//       ^ number

    sta $d020   // mnemonic with address
//  ^ keyword
//      ^ number

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
.text @"Hi\n"   // escaped string
//    ^ string

// Comments
// This is a comment
// <- comment
/* Multi-line
   comment */
// <- comment

// Operators
lda #$10 + $20  // operator
//       ^ operator
