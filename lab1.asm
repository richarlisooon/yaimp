.data
num1: .word 14
num2: .word 7
res: .word 0

.text
lw $t0, num1
lw $t1, num2
li $t2, 0

loop:
	add $t2,$t2,$t0
	addi $t1,$t1,-1
	bne $t1, $zero,loop
sw $t2,res