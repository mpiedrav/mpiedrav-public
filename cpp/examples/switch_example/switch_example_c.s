	.file	"switch_example_c.c"
	.text
	.globl	check_argc_switch
	.type	check_argc_switch, @function
check_argc_switch:
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
	.size	check_argc_switch, .-check_argc_switch
	.globl	check_argc_if
	.type	check_argc_if, @function
check_argc_if:
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
	.size	check_argc_if, .-check_argc_if
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
	call	check_argc_switch
	movl	%eax, -4(%rbp)
	movl	-20(%rbp), %eax
	movl	%eax, %edi
	call	check_argc_if
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
