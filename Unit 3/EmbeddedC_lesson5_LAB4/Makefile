#@copyright : Hussein Elsaka

lab4.elf : linker_script.ld main.c startup.c
	arm-none-eabi-gcc.exe -mcpu=cortex-m3 -mthumb -nostartfiles -g -gdwarf-2 -T linker_script.ld -I . startup.c main.c -o lab_4.elf