Data segment
    a dw 1111h
    b dw 2222h
    Data Ends
Code Segment
    Assume cs:code , ds : Data 
    start:
    MOV ax , Data
    MOV ds , ax
    MOV ax , a
    MOV bx , b
    add ax , bx
    int 21H
    code ends 

end start