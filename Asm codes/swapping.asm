data segment
data ends
code segment
    assume cs: code , ds:data
    start:
    mov ax , 05h
    mov cx , 06h
    XCHG ax , cx
    code ends
end start