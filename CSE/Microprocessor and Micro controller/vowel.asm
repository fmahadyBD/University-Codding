.model small
.stack 100h
.data
message db "Enter a small charecter :$"
message2 db "Vowel$"
message3 db "COnsonents$"

.code
main proc
    mov ax,@data
    mov ds,ax
    
    mov ah,9
    lea dx,message
    int 21h
    
    mov ah,1
    int 21h
    mov bl,al
    
     ;if
        cmp bl, 'a'
        je level
    ;else if    
        cmp bl ,'e'
        je level 
    ;else if   
        cmp bl ,'i'
        je  level
    ;else if    
        cmp bl ,'o'
        je level 
    ;else if    
        cmp bl ,'u'
        je level
    ;else
        mov ah,9
        lea dx, message3
        int 21h
        jmp break   ; for skip the next level
    
    
    level:
      mov ah,9
      lea dx,message2
      int 21h
      
    break:
    
    
    mov ah,4ch
    int 21h
    main endp
end main