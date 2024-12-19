.model small
.stack 100h
.data
   msg1 db "Enter a small charatecr: $"
   msg2 db "Vowel$"
   msg3 db "Consonents$"
.code
main proc
     mov ax,@data
     mov ds,ax
     
     mov ah,9
     lea dx, msg1
     int 21h
     
     mov ah,1
     int 21h
     mov bl,al
     
     cmp bl,'a'
     je lv
     
     cmp bl,'e'
     je lv
     
     cmp bl,'i'
     je lv
     
     cmp bl,'o'
     je lv
     
     cmp bl,'u'
     je lv
     
      ; else
       mov ah,9
       lea dx,msg3
       jmp bk
       
     lv:
        mov ah,9
        lea dx,msg2
        int 21h
        
       bk:
       
       mov dl,4ch
       int 21h
   
    
    main endp
end main