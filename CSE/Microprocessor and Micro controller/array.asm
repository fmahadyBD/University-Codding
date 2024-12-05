.model small
.stack 100h
.data
 ;a db 3,1,2,5,6
  a db 10 dup(?)
   msg db "Enter the numbers of elements:$" 
 sum db ?

 
.code
main proc  
    mov ax,@data
    mov ds,ax   
 
    ;-------  1
   ; si,di use for store ofset address
    ; mov si,offset a    ; offset is refer to define the array initial 1st value index
     ;mov bx,0
     ;mov cx,5
     ;l1:  
        ; add bl,a[si]
         ;inc si   ; it mean the increment the si,
         ;loop l1
    
    ;mov sum,bl
    ; ----------------------   end 1
            
    ;-----2nd:
    
    mov ah,9
    lea dx,msg
    int 21h
    
    ; take input
    mov ah,1
    int 21h
    mov bl,al
    sub bl,30h
         
    ;make cx as 0
    xor cx,cx
    mov cl,bl
    
    ; make si as 0 beacuse thi is comming form
    mov si,0
    
    l1:
        mov ah,1
        int 21h
        mov a[si],al
        inc si
        loop l1
    
    
     ;print bl is unchaged so we use ut
     
     xor cx,cx
     mov cl,bl   
     
     xor bh,bh
     mov si,bx
     sub si,1
     
     l2:
        mov ah,2
        mov dl,a[si]    ; dl will print 
        int 21h
        ;inc si      
        dec si   
        loop l2   
    
    
    mov ah,4ch
    int 21h  
    main endp
end main



