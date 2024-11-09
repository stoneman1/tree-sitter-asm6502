const KickAssemblerVariables = ["const", "var"];

const KickAssemblerDirectives = [
  "*", // set memory position ie. * = $1000
  "align", // align memory position ie. .align $100
  "assert", // assert condition ie. .assert "Test 1",2+2,4
  "asserterror", // assert condition, print error message ie. .asserterror "Test 2", List().get(27)
  "break",
  "by", // alias for byte
  "byte", // define byte ie. .byte $01,$02,$03
  "const", // define constant ie. .const DELAY=7
  "cpu", // set CPU type ie. .cpu _65c02
  "define", // Executes a block of directives in 'functionmode' (faster) to define values. ie. .define width, height {...}
  "disk", // creates a d64 image file ie. disk [..disk pararamters..] {..filepa- rameters..}
  "dw", // alias for dword
  "dword", // define dword ie. .dword $12341234
  "encoding", // set character encoding ie. .encoding "screencode_upper"
  "enum", // define a series of constants ie. .enum { a, b, c }
  "error", // print error message ie. .error "This is an error message"
  "errorif", // print error message if condition is true ie. .errorif x>10 "not good!"
  "eval", // evaluate a script expression ie. .eval x=x+y/2
  "file", // Creates a prg or bin file from the given segments. ie. .file [name="myfile.prg" segments="Code, Data"]
  "filemodify", // Modify the output of the current source file with the given modifier. ie. .filemodify Encrypt(33)
  "filenamespace", // Creates a namespace for all the following directives in the current source file. ie. .filenamespace myspace
  "fill", // Fills a number of bytes with the value of a given expression. ie. .fill 10, i*2
  "fillword", // Fills a number of words with the value of a given expression. ie. fillword 10, i*$102
  "for", // creates for loop ie. .for(var i;i<10;i++) {...}
  "function", // defines function ie. .function area(h,w) {..}
  "if", // execute code block if the condition is true ie. .if (x>10) {...}
  "import", // import a file ie. .import binary "music.bin" possible second params include: binary, c64, source, text
  "importonce", // import a file only once ie. .importonce binary "music.bin" deprecated.
  "label", // define a label ie. .label color=$d020
  "lohifill", // Fills two table with hi and lo byte of the given expression. Address of the tables can be read by connecting a label. ie. .lohifill $100, i*40
  "macro", // defines a macro ie. .macro mymacro() {..}
  "memblock", // define memory block to current memoryposition ie. .memblock "new block"
  "modify", // mofify the output of codeblock using the given modifier ie. .modify Encrypt(27) {..}
  "namespace", // create local namespace ie. .namespace myspace {..}
  "pc", // same as * ie. .pc=$1000
  "plugin", // Tells the assembler to look for a plugin at the given java-package path. ie. .plugin "plugins.macros.MyMacro"
  "print", // print a message to the console ie. .print "Hello World!"
  "printnow", // print a message to the console immediately ie. .printnow "Hello World!"
  "pseudocommand", // define a pseudocommand ie. .pseudocommand mov src:tar {...}
  "pseudopc", // Sets the program counter to something else than the actual memory position. ie. .pseudopc $2000 {...}
  "return", // return from function ie. .return 27
  "segment", // Switches to another segment ie. .segment Data "my data"
  "segmentdef", // Defines a segment ie. .segmentdef Data [start=$1000]
  "segmentout", // Output the bytes of an intermediate segment to the current memoryblock. ie. .segmentout [segments="DRIVE_CODE"]
  "struct", // Defines a struct ie. .struct Point {x,y}
  "te", // alias for text
  "text", // define text ie. .text "Hello World!"
  "var", // define variable ie. .var x=10
  "while", // create while loop ie. .while (x<10) {...}
  "wo", // alias for word
  "word", // define word ie. .word $1000,$1012
  "zp", // Marks unresolved labels as being in the zeropage. ie. .zp { label: .byte 0 ... }
];

const KickPreprocessorDirectives = [
  "define", // Defines a preprocessor symbol. ie. #define DEBUG
  "elif", // Else if. ie. #elif TEST
  "else", // Else. ie. #else
  "endif", // End if. ie. #endif
  "if", // If. ie. #if !DEBUG
  "import", // Import another sourcefile. ie. #import "file.asm"
  "importif", // Import another sourcefile if a condition is true. ie. #importif DEBUG "file.asm"
  "importonce", // Import another sourcefile only once. ie. #importonce "file.asm"
  "undef", // Undefines a preprocessor symbol. ie. #undef DEBUG
];

const AssemblerOpcodes = [
  "ADC",
  "AND",
  "ASL",
  "BCC",
  "BCS",
  "BEQ",
  "BIT",
  "BMI",
  "BNE",
  "BPL",
  "BRK",
  "BVC",
  "BVS",
  "CLC",
  "CLD",
  "CLI",
  "CLV",
  "CMP",
  "CPX",
  "CPY",
  "DEC",
  "DEX",
  "DEY",
  "EOR",
  "INC",
  "INX",
  "INY",
  "JMP",
  "JSR",
  "LDA",
  "LDX",
  "LDY",
  "LSR",
  "NOP",
  "ORA",
  "PHA",
  "PHP",
  "PLA",
  "PLP",
  "ROL",
  "ROR",
  "RTI",
  "RTS",
  "SBC",
  "SEC",
  "SED",
  "SEI",
  "STA",
  "STX",
  "STY",
  "TAX",
  "TAY",
  "TSX",
  "TXA",
  "TXS",
  "TYA",

  // from illegal opcodes

  "SLA",
  "RLA",
  "ISC",
  "SRE",
  "SAX",
  "RRA",
  "LAX",
  "DCP",
  "ANC",
  "ALR",
  "ARR",
  "SBX",
  "SBC",
  "LAS",
  "JAM",
  "SHA",
  "SHX",
  "XAA",
  "SHY",
  "TAS",
  "SIR",
  "SAC",
  "TRB",
  "TSB",
  "STZ",
  "WAI",
];

const KickAssemblerMathConstants = [
  "PI", // 3.141592653589793
  "E", // 2.718281828459045
];

const KickAssemblerMathFunctions = [
  "abs",
  "acos",
  "asin",
  "atan",
  "atan2",
  "cbrt",
  "ceil",
  "cos",
  "cosh",
  "exp",
  "expm1",
  "floor",
  "hypot",
  "IEEEremainder",
  "log",
  "log10",
  "log1p",
  "max",
  "min",
  "mod",
  "pow",
  "random",
  "round",
  "signum",
  "sin",
  "sinh",
  "sqrt",
  "tan",
  "tanh",
  "toDegrees",
  "toRadians",
];

const KickAssemblerNumberFormats = [
  ["", "decimal"],
  ["$", "hexadecimal"],
  ["%", "binary"],
];

const KickAssemblerValueTypes = [
  ["65xxArgument", ""], // Assembly arguments like ($10),y
  ["BinaryFile", ""], // Binary file data
  ["Boolean", ""], // true/false values
  ["Char", ""], // Single characters
  ["Hashtable", ""], // Hash table data structure
  ["List", ""], // List data structure
  ["Matrix", ""], // 4x4 matrix
  ["Null", ""], // null value
  ["Number", ""], // Floating point numbers
  ["OutputFile", ""], // Output file handler
  ["Picture", ""], // Loaded picture data
  ["SidFile", ""], // SID music file data
  ["String", ""], // Text strings
  ["Struct", ""], // User-defined structures
  ["Vector", ""], // 3D vector
];

const KickAssemblerDataHandlingFunctions = [
  "LoadBinary", // LoadBinary("file.bin", "")
  "LoadPicture", // LoadPicture("img.gif")
  "LoadSid", // LoadSid("music.sid")
  "createFile", // createFile("file.txt")
];

module.exports = {
  AssemblerOpcodes: AssemblerOpcodes,
  KickAssemblerDirectives: KickAssemblerDirectives,
  KickPreprocessorDirectives: KickPreprocessorDirectives,
  KickAssemblerMathConstants: KickAssemblerMathConstants,
  KickAssemblerMathFunctions: KickAssemblerMathFunctions,
  KickAssemblerValueTypes: KickAssemblerValueTypes,
  KickAssemblerDataHandlingFunctions: KickAssemblerDataHandlingFunctions,
};
