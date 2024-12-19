.model small
.stack 100h
.data

 
.code
main proc  
    mov ax,@data
    mov ds,ax
        
        
    mov dl,2
    add dl,30h     
    mov ah, 2         
    int 21h          
    
    
    mov ah,4ch
    int 21h  
    main endp
end main


