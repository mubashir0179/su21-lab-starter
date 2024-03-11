.globl factorial

.data
n: .word 8

.text
main:
    la t0, n
    lw a0, 0(t0)
    jal ra, factorial

    addi a1, a0, 0
    addi a0, x0, 1
    ecall # Print Result

    addi a1, x0, '\n'
    addi a0, x0, 11
    ecall # Print newline

    addi a0, x0, 10
    ecall # Exit

factorial:
    # YOUR CODE HERE (Iteration)
    
  addi t0, x0, 1       # i = 1
  addi t1, x0, 1       # result = 1
  
loop:
  bgt t0, a0, exit     # if i > n, exit loop
  
  mul t1, t1, t0       # result *= i
  
  addi t0, t0, 1       # i++
  jal x0, loop
  
exit:
  add a0, t1, x0       # return result
  ret
