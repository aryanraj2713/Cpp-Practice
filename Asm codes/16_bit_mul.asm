data segment
    m dw 0022h
    n dw 0022h
    res dw ?
    data ends
code segment
    assume cs:code , ds:data
    Start:
    mov ax , data
    mov ds , ax
    mov ax , m
    mov bx , n
    mul bx
    mov cx , ax
    mov res , cx
    int 21h
    code ends
end start
    