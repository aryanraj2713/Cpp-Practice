data segment
    a dw 0404h
    b dw 0404h 
    res dw ?
    data ends
code segment
    assume cs:code , ds:data
    Start:
    Mov ax , data
    Mov ax , a
    Mov bx , b
    add ax , bx
    mov res , ax
    int 21h
    
    code ends
end start