.model small
.stack 100h
.data
    msg db "The quotient is: $"
    msg2 db "The remainder is: $"
    quotient db ?
    remainder db ?
.code

main proc
    mov ax, @data
    mov ds, ax

    ; Load the dividend (5) into AX (16-bit)
    mov ax, 5

    ; Load the divisor (2) into BL (8-bit)
    mov bl, 2

    ; Perform the division
    div bl           ; AX / BL => quotient in AL, remainder in AH

    ; Store quotient and remainder
    mov quotient, al
    mov remainder, ah

    ; Print the quotient
    mov ah, 9
    lea dx, msg
    int 21h
    mov dl, quotient
    add dl, 30h     
    mov ah, 2
    int 21h
       
       
       
    ; Print the remainder
    mov ah, 9
    lea dx, msg2
    int 21h
    mov dl,remainder
    add dl, 30h       
    mov ah, 2
    int 21h

    mov ah, 4Ch
    int 21h

main endp
end main
