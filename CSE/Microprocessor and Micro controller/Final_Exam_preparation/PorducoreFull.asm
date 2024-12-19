org 100h
.data
    strArray db 'Enter 5 digits: $'    ; Prompt to enter 5 digits       
    
    msg_avg db 'Average is: $'
    msg_largest db 'Largest digit is: $'
    msg_smallest db 'Smallest digit is: $' 
    
    result db 5 dup(0) ; space for storing 5 digits 
    
    avg_result db 'Avg: $' 
    
    largest_result db 'Largest: $'   
    
    smallest_result db 'Smallest: $'

.code
main proc
    mov ax, @data
    mov ds, ax

    lea dx, strArray
    mov ah, 9h
    int 21h

    ; Take 5 digits as input
    lea dx, result
    call take_input 
    
    
    
    

    ; Calculate the average of the digits
    call calculate_average  
    
    
    
    

    ; Calculate the largest digit
    call find_largest  
    
    
    

    ; Calculate the smallest digit
    call find_smallest

    ; Exit to DOS
    mov ah, 4Ch
    mov al, 00h
    int 21h
main endp 







; Procedure to take 5 digits input
take_input proc
    mov cx, 5              ; Counter for 5 digits
    lea si, result         ; SI points to result array
 
     
    take_input_loop:
        mov ah, 01h            ; DOS interrupt to take a single character input
        int 21h                ; Take input
        sub al, '0'            ; Convert ASCII to integer (e.g., '5' -> 5)
        mov si, al           ; Store digit in result array
        inc si                 ; Move to next element
        loop take_input_loop   ; Repeat for 5 digits
        ret
take_input endp
            
            
            
            
; Procedure to calculate the average of the digits
calculate_average proc
    lea si, result         ; SI points to result array
    xor ax, ax             ; Clear AX for sum calculation
    mov cx, 5              ; Counter for 5 digits

calculate_average_loop:
    add al,si           ; Add current digit to AL
    inc si                 ; Move to the next element
    loop calculate_average_loop
    mov bl, 5              ; We have 5 digits, divide by 5 to get the average
    div bl                 ; AX / 5 => quotient in AL (average)
   
   
    ; Store the result in avg_result
    lea dx, msg_avg
    mov ah, 09h
    int 21h
    add al, '0'            ; Convert average to ASCII
    mov dl, al
    mov ah, 02h
    int 21h
    ret
calculate_average endp  




; Procedure to find the largest digit
find_largest proc
    lea si, result         ; SI points to result array
    mov al, [si]           ; Assume the first element is the largest
    inc si
    mov cx, 4              ; Check remaining 4 digits

find_largest_loop:
    cmp al, [si]           ; Compare current largest (AL) with the next digit
    jge skip               ; If AL >= [si], skip to the next digit
    mov al, [si]           ; Otherwise, update AL with the new larger digit
skip:
    inc si                 ; Move to the next element
    loop find_largest_loop ; Repeat for the remaining digits
    ; Store the result in largest_result
    lea dx, msg_largest
    mov ah, 09h
    int 21h
    add al, '0'            ; Convert largest digit to ASCII
    mov dl, al
    mov ah, 02h
    int 21h
    ret
find_largest endp
  
  
  
  
  
; Procedure to find the smallest digit
find_smallest proc
    lea si, result         ; SI points to result array
    mov al, [si]           ; Assume the first element is the smallest
    inc si
    mov cx, 4              ; Check remaining 4 digits

find_smallest_loop:
    cmp al, [si]           ; Compare current smallest (AL) with the next digit
    jle skip_smallest      ; If AL <= [si], skip to the next digit
    mov al, [si]           ; Otherwise, update AL with the new smaller digit
skip_smallest:
    inc si                 ; Move to the next element
    loop find_smallest_loop ; Repeat for the remaining digits
    ; Store the result in smallest_result
    lea dx, msg_smallest
    mov ah, 09h
    int 21h
    add al, '0'            ; Convert smallest digit to ASCII
    mov dl, al
    mov ah, 02h
    int 21h
    ret
find_smallest endp
