data segment
    a dw 2222h
    b dw 1111h
    
    data ends
code segment
    
    assume cs: code , ds: data
    start:
    mov ax , data
    mov ds , ax
    mov ax , a
    mov bx , b
    sub ax , bx
    int 21h
    code ends
end start
    