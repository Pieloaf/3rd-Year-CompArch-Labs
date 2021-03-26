.386
.model flat
.code
public _sample
_sample proc
	push ebp
	mov ebp, esp
	_a$ = 8
	_b$ = 12

	mov eax, DWORD PTR _a$[ebp]
	add eax, DWORD PTR _b$[ebp]
	pop ebp
	ret
_sample endp
end
