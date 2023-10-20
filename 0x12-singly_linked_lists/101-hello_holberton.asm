section .data
    hello db 'Hello, Holberton', 0

section .text
    extern printf

global main
main:
    ; Prepare arguments for printf
    mov rdi, hello  ; format
    xor rax, rax    ; vararg count

    ; Call printf
    call printf

    ; Return from main
    xor eax, eax
    ret
