.model small
.stack 100h
.data

 
.code
main proc  
    mov ax,@data
    mov ds,ax   
 
    mov al,5
    mov bl,4
    
    call func_add
    mov ah,2
    mov dl,dl 
    add dl,30h
    int 21h

    
    mov ah,4ch
    int 21h  
    main endp  

func_add proc
      mov dl,al
      add dl,bl
      ret
      
     func_add endp
end main



