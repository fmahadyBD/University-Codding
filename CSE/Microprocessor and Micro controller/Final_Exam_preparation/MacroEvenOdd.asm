org 100h

.data
    ; Defining the prompt message
    prompt db 'Enter 5 digits (0-9): $'
    oddSumMsg db 'Sum of odd digits: $'
    evenSumMsg db 'Sum of even digits: $'
    
    ; Defining the array space for 5 digits
    array db 5 dup(0)  ; space for storing 5 digits
    
    ; Define word variables for storing the sums
    oddSum dw 0         ; Sum of odd digits (word)
    evenSum dw 0        ; Sum of even digits (word)

.code

; Macro to process the array and calculate the sum of odd and even digits
process_array macro arrAddr
    ; Initialize sum variables
    xor ax, ax     ; Clear AX for oddSum (16-bit register)
    xor bx, bx     ; Clear BX for evenSum (16-bit register)

    lea si, arrAddr ; Load the address of the array into SI
    mov cx, 5       ; Loop 5 times for 5 digits

process_loop:
    mov al, [si]    ; Load the current digit from the array
    cmp al, 0       ; Check if the digit is zero (we assume digits are 0-9)
    jz skip_digit   ; If zero, skip

    ; Check if the digit is odd or even
    test al, 1      ; Test if the least significant bit is 1 (odd) or 0 (even)
    jz even_digit   ; If zero, it's even

    ; Odd Digit Processing
    add oddSum, ax  ; Add the odd digit to oddSum (AX register holds the digit)
    jmp next_digit  ; Jump to the next digit

even_digit:
    ; Even Digit Processing
    add evenSum, ax ; Add the even digit to evenSum (BX register holds the digit)

next_digit:
    inc si          ; Move to the next element in the array
    loop process_loop
skip_digit:
endm

; Start of the main program
main proc
    ; Set up the data segment
    mov ax, @data
    mov ds, ax

    ; Display the prompt message
    lea dx, prompt
    mov ah, 09h
    int 21h

    ; Take input (5 digits)
    lea dx, array   ; Address of the array to store the digits
    call take_input

    ; Process the array and calculate odd/even sums
    process_array array

    ; Display sum of odd digits
    lea dx, oddSumMsg
    mov ah, 09h
    int 21h
    mov ax, oddSum
    call print_sum

    ; Display sum of even digits
    lea dx, evenSumMsg
    mov ah, 09h
    int 21h
    mov ax, evenSum
    call print_sum

    ; Exit program
    mov ah, 4ch
    int 21h
main endp

; Procedure to take input and store it in the array
take_input proc
    mov cx, 5        ; We want to take 5 digits
    lea si, array    ; Load address of array into SI

take_input_loop:
    mov ah, 01h      ; Function to get a single character input
    int 21h          ; Call interrupt to take input
    sub al, '0'      ; Convert ASCII input to integer (subtract ASCII value of '0')
    mov [si], al     ; Store the digit in the array
    inc si           ; Move to the next array location
    loop take_input_loop
    ret
take_input endp

; Procedure to print the sum (as a single digit for simplicity)
print_sum proc
    ; Convert the sum to ASCII and print
    add ax, '0'      ; Convert the sum from integer to ASCII
    mov dl, al
    mov ah, 02h
    int 21h          ; Print the sum
    ret
print_sum endp

