data segment
data ends
code segment
    assume cs:code , ds: data
    start:
    Mov ax , 05h
    NOT ax
    Add ax , 01h
    code ends
end start