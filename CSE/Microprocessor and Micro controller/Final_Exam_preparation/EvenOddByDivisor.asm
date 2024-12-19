.model small
.stack 100h
.data
    msg_even db "The number is even.$"
    msg_odd  db "The number is odd.$"
    num db 3  
.code

main proc
    ; Set up the data segment
    mov ax, @data
    mov ds, ax

    ; Load the number (3) into AL
    mov al, [num]   ; AL = 3 (the number to check)

    ; Divide the number by 2
    mov bl, 2       ; Divisor = 2
    div bl          ; AX / BL => quotient in AL, remainder in AH

    ; Check if remainder (AH) is 0 or 1
    cmp ah, 0       ; Compare remainder (AH) with 0
    je even         ; If AH is 0, jump to "even" label

    ; If remainder is 1, it's odd
    mov ah, 9
    lea dx, msg_odd
    int 21h
    jmp done

even:
    ; If remainder is 0, it's even
    mov ah, 9
    lea dx, msg_even
    int 21h

done:
    ; Exit the program
    mov ah, 4Ch
    int 21h

main endp
end main
