section .data
    hello db 'Hello, Holberton', 0

section .text
    global main
    extern printf

main:
    sub rsp, 8                         ; Align stack
    mov rdi, format                    ; Format string
    mov rsi, hello                     ; String to print
    xor eax, eax                       ; Clear EAX register
    call printf                        ; Call printf function
    add rsp, 8                         ; Restore stack
    xor eax, eax                       ; Return 0
    ret
