.386
.model flat
.code
public _sort
_sort proc
	push ebp		; pushing ebp onto the stack
	mov ebp, esp	; pointing ebp to the top of the stack
	_str$ = 8		;
	_len$ = 12		
	mov esi, [ebp + _str$]	; pointing esi to the start of the string
	mov ebx, 1				; i <- 1 

while1:	cmp ebx, [ebp+_len$]	; while i < length(A)
	jae FINAL

	mov ecx, ebx	; j <- i

while2:	cmp ecx, 0	; while j > 0
	jbe end2

;; setting flags to check for upper case to 0
	mov dl, 0		
	mov dh, 0
;; moving the current char and the preceding char into al and ah
	mov al, [esi+ecx]  ;   A[j]
	mov ah, [esi+ecx-1]; A[j-1]

;; checking for upper case and converting to lower where needed
;; a flag dl or dh is set when either al or ah are converted
alup:	cmp al, 96
	ja ahup
	add al, 32
	add dl, 1
ahup:	cmp ah, 96
	ja skip1
	add ah, 32
	add dh, 1

;; checking if the characters need to swap places
skip1:	cmp ah,al     ; and A[j-1] > A[j]
	jb end2
	ja swap
	cmp dl, 0
	je end2

swap:	

;; restoring uppercase to converted letters by checking dl and dh the flags
alres:	cmp dl, 0
	je ahres
	sub al, 32
ahres: cmp dh, 0
	je skip2
	sub ah, 32


;; the actual swap takes place here
;; the character from esi+ecx in al gets put into esi+ecx-1
;; the character from esi+ecx-1 in ah gets put into esi+ecx
skip2:	mov [esi+ecx-1], al
	mov [esi+ecx], ah

	dec ecx		; j = j-1
	jmp while2

end2:  inc ebx	; i = i+1
	jmp while1

	
FINAL: pop ebp	; pop ebp from the stack
	ret			; return from the function
_sort endp
end