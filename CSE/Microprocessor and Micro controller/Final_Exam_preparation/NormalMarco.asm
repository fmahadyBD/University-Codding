mdsplay_string macro string ; declaration of macro
    mov dx, ffset string
    mov ah, 09h
    int 21h
endm

org 100h
.data
message1 db 'Microprocessors and', 0dh, 0ah, '$'   ;Carriage Return Line Feed 
message2 db 'Microcontrollers Lab$', 0

.code
main proc
    mov ax, @data
    mov ds, ax
    mdsplay_string message1 ; 1st call of the macro
    mdsplay_string message2 ; 2nd call of the macro
    mov ah, 4ch ; return to DOS
    int 21h
main endp
