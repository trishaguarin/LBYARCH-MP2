default rel
global imgCvtGrayIntToDouble

section .text

imgCvtGrayIntToDouble:
    ; rcx = rows
    ; rdx = columns
    ; r8 = input array pointer
    ; r9 = output array pointer

    ; eax = total elements
    ; r10d = array index
    ; r11d = integer value
    ; xmm0 = 255.0
    ; xmm1 = double value

    mov eax, ecx
    imul eax, edx                   ; get total elements

    xor r10d, r10d                  ; initialize array index

    mov rcx, 255
    cvtsi2sd xmm0, rcx              ; load 255.0

loop:
    cmp r10d, eax
    je done

    mov r11d, [r8 + r10 * 4]        ; load element
    cvtsi2sd xmm1, r11d             ; convert to double
    divsd xmm1, xmm0                ; divide by 255
    movsd [r9 + r10 * 8], xmm1      ; store in output array

    inc r10d
    jmp loop

done:
    xor rax, rax                    ; clear rax
    ret
