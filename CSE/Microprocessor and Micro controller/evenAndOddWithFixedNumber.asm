.model small
.stack 100h
; couter regist cx deye loop , counter cx rathbo \ 
; cx = n
; loop (decrement), jump again frist
; if cx ==0 then automatically stop 

.data 
message db "Enter a digit: $"
sum dw ? ; 16 bit because we take 16 bit for output
.code
main proc
     mov ax,@data
     mov ds,ax
     
     ;mov ah,9
     ;lea dx,message
     ;int 21h
     
     ;mov ah,1
     ;int 21h
     ;mov bl,al
     ;sub bl,30h ; we need to minus 30
     
     ; 16 bit so, need 8 if cx , i=cx
     ; bx then move it bl,bh , we have value in bl, so we will store in bh
     ; bh have proble so we need to xor it, for make it 0
     ; bl=0 beacuse bl is sum
     ; dx =ans
     
     ;xor bh,bh   ; make it 0 
     ; we need to control the loop by bx, bx = bl,bh ; so we make bh =0 and move bl into bx 
     
     ; even
    ; mov bx,8  
     mov bx,7
     
     mov cx,bx ; cx controll the loop cx 16 bit that's why bl convert into bx then cx
     mov dl,0
     level:
        add dx,cx
        ;even
        dec cx
        ;odd
         cmp cx,0
         je level2
        loop level  ;auto decrement when cx=0 then auto 
     
     level2:
     mov sum,dx ; we store
     
     
    
    mov ah,4ch
    int 21h
    main endp
end main
