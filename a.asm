.code
CollatzASM proc
	xor eax, eax ; Sets EAX register to zero

	cmp ecx, 1
	jle Finish

MainLoop:
	mov edx, ecx ; Copy the value of ECX into EDX

	imul edx, 3
	inc edx ; Value of 3x + 1 is stored in EDX

	shr ecx, 1 ; Value of x / 2 is stored in ECX

	cmovc ecx, edx ; If ECX was odd, copy the value of EDX

	inc eax ; Increment iterations
	cmp ecx, 1
	jg MainLoop

Finish:
	ret
CollatzASM endp
end