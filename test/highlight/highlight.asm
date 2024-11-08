// Initialize memory
// ^ comment
init:
// ^ label
    lda #$00
    // <- function.builtin

// Main loop
// ^ comment
main:
// ^ label
    lda $0200
    clc
    adc #$01
    sta $0200
    bne main
.align 2
    lda $0201
    clc
    adc #$01+1
    // <- function.builtin
    //  ^ number
    //      ^ operator
    sta $0201
    bne main
/* End of program
*/
// ^ comment
end:
// ^ label
    rts
