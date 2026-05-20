	.file	"switch_example_cpp.cpp"
	.text
	.globl	_Z17check_argc_switchi
	.type	_Z17check_argc_switchi, @function
_Z17check_argc_switchi:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -4(%rbp)
	cmpl	$2, -4(%rbp)
	je	.L2
	cmpl	$2, -4(%rbp)
	jg	.L3
	cmpl	$0, -4(%rbp)
	je	.L4
	cmpl	$1, -4(%rbp)
	je	.L5
	jmp	.L3
.L4:
	movl	$0, %eax
	jmp	.L6
.L5:
	movl	$1, %eax
	jmp	.L6
.L2:
	movl	$2, %eax
	jmp	.L6
.L3:
	movl	$-1, %eax
.L6:
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	_Z17check_argc_switchi, .-_Z17check_argc_switchi
	.globl	_Z13check_argc_ifi
	.type	_Z13check_argc_ifi, @function
_Z13check_argc_ifi:
.LFB1:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -4(%rbp)
	cmpl	$0, -4(%rbp)
	jne	.L8
	movl	$0, %eax
	jmp	.L9
.L8:
	cmpl	$1, -4(%rbp)
	jne	.L10
	movl	$1, %eax
	jmp	.L9
.L10:
	cmpl	$2, -4(%rbp)
	jne	.L11
	movl	$2, %eax
	jmp	.L9
.L11:
	movl	$-1, %eax
.L9:
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	_Z13check_argc_ifi, .-_Z13check_argc_ifi
	.globl	main
	.type	main, @function
main:
.LFB2:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movl	%edi, -20(%rbp)
	movq	%rsi, -32(%rbp)
	movl	-20(%rbp), %eax
	movl	%eax, %edi
	call	_Z17check_argc_switchi
	movl	%eax, -4(%rbp)
	movl	-20(%rbp), %eax
	movl	%eax, %edi
	call	_Z13check_argc_ifi
	movl	%eax, -8(%rbp)
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	main, .-main
	.ident	"GCC: (Debian 14.2.0-19) 14.2.0"
	.section	.note.GNU-stack,"",@progbits
