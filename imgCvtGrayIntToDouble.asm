default rel
global imgCvtGrayIntToDouble

section .data
reciprocal_255 dq 0.003921568627  ; 1/255 as double

section .text

imgCvtGrayIntToDouble:
    ; rcx = rows
    ; rdx = columns
    ; r8 = input array pointer
    ; r9 = output array pointer

    ; eax = total elements
    ; r10 = array index
    ; r11d = integer value
    ; xmm0 = 255.0
    ; xmm1 = double value

    mov eax, ecx
    imul eax, edx                   ; get total elements

    xor r10, r10                    ; initialize array index

loop:
    cmp r10d, eax
    je done

    mov r11d, [r8 + r10 * 4]        ; load element
    cvtsi2sd xmm1, r11d             ; convert to double
    movsd xmm0, qword [reciprocal_255]  ; load 1/255
    mulsd xmm1, xmm0                    ; multiply
    movsd [r9 + r10 * 8], xmm1      ; store in output array

    inc r10
    jmp loop

done:
    xor rax, rax                    ; clear rax
    ret
