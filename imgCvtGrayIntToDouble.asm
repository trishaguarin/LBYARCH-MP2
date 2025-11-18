default rel
global imgCvtGrayIntToDouble

section .text

imgCvtGrayIntToDouble:
    ; rcx = rows
    ; rdx = columns
    ; r8 = matrix first element pointer

    mov r9,  r8         ; matrix pointer

    mov rax, 255
    cvtsi2sd xmm1, rax  ; 255.0 constant

row_loop:
    cmp rcx, 0
    jz near done
    mov r10, rdx        ; reset column counter

col_loop:
    cmp r10, 0
    jz near next_row

    movsd xmm0, [r9]    ; load number
    divsd xmm0, xmm1    ; divide by 255
    movsd [r9], xmm0    ; store back

    add r9, 8           ; next element
    dec r10
    jmp near col_loop

next_row:
    dec rcx
    jmp near row_loop

done:
    ret
