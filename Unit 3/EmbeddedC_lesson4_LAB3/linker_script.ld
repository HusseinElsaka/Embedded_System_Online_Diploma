/*
Linker script CortexM3
HusseinElsaka
*/

MEMORY
{
	flash(RX) : ORIGIN = 0x00000000, LENGTH = 512M
	sram(RWX) : ORIGIN = 0X20000000, LENGTH = 512M
}

SECTIONS
{
	.text : 
	{
		*(.vectors*)
		*(.text*)
		_E_text = . ;
	} >flash
	
	.data : 
	{
		_S_DATA = . ;
		*(.data*)
		_E_DATA = . ;
	}>sram AT> flash
	
	.bss : 
	{
		_S_bss = . ;
		*(.bss*)
		. = ALIGN(4);
		_E_bss = . ;

	} >sram

}