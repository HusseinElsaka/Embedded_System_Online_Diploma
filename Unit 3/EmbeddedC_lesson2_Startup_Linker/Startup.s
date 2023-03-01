.globl reset 

reset:
		ldr sp, =stacktop
		bl main
stop:	b stop
