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
        
     ;bl is unchaged so we use it 
     ; reverse order prinitng
     
     xor cx,cx ;
     mov cl,bl   
     
     xor bh,bh
     mov si,bx
     sub si,1
     
     l2:
        mov ah,2
        mov dl,a[si]; dl will print 
        int 21h     
        dec si   
        loop l2 
        
        
        
        
        
    ; Print the array elements in normal order (from index 0 to bl-1)
    xor bh,bh
    xor si, si         ; Start from the first element of the array
    mov cx, b         ; Load the number of elements into CX (loop counter)
l3:
    mov dl, a[si]      ; Load array element into DL
    mov ah, 2          ; Print the character in DL
    int 21h            ; Display the character
    inc si             ; Move to the next array element
    loop l3           ; Loop until a  
    
    
    mov ah,4ch
    int 21h  
    main endp
end main


