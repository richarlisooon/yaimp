.data
num1: .word 23
num2: .word 21
resadd: .word 0
ressub: .word 0
.text
lw $t0, num1
lw $t1 ,num2
add $t2, $t1, $t0
sw $t2, resadd
sub $t3, $t1, $t0
sw $t3, ressub