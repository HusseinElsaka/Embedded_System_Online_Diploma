ENTRY(reset)

MEMORY
{
	Mem : ORIGIN = 0X00000000, LENGTH = 64M
}

SECTIONS
{
	. = 0x10000;
	.startup . :
	{
		startup.o(.text)
	}> Mem
	.text :
	{
		*(.text)
	}> Mem
	.data :
	{
		*(.data)
	}> Mem
	.bss :
	{
		*(.bss)
	}> Mem
	.others :
	{
		*(COMMON)
	}> Mem
	. = . + 0x1000;
	stacktop = .;
}