.model small
.stack 100h
.data
   
   msg db "Enter a Digit: $s"
   sum dw ?
.code

main proc
    mov ax,@data
    mov ds,ax
    
    ; take the sumber
    mov ah,9
    lea dx,msg
    int 21h
    
    ;take intput
    mov ah,1
    int 21h
    mov bl,al
    sub bl,30h
    
    
    
    ; we take 16 bit
    xor bh,bh
    mov cx,bx
    
    mov dl,0
    l:
        add dx,cx
        loop l;
    mov sum,dx  
       
    mov ah,4ch
    int 21h
    main endp
end main