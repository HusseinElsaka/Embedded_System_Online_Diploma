#@copyright : Hussein Elsaka

CC=arm-none-eabi-
CFLAGS= -mcpu=cortex-m4 -gdwarf-2
INCS= -I . 
LIBS= 
SCR= $(wildcard *.c)
OBJ= $(SCR:.c=.o)
As= $(wildcard *.s)
AsOBJ = $(As:.s=.o) 

Project_name=learn-in-depth_cortex_m4

all : $(Project_name).bin
	@echo "Build is Done"
	
ifeq ("$(wildcard startup.s)","")
    # do nothing
else
    $(CC)as.exe $(CFLAGS) startup.s -o startup.o
endif

	
%.o: %.c
	$(CC)gcc.exe -c $(INCS) $(CFLAGS) $< -o $@

$(Project_name).elf: $(AsOBJ) $(OBJ)
	$(CC)ld.exe -T linker_script.ld $(LIBS) $(AsOBJ) $(OBJ) -o $@ -Map=map_file.map
	cp $(Project_name).elf $(Project_name).axf
	
$(Project_name).bin: $(Project_name).elf
	$(CC)objcopy.exe -O binary $< $@

clean_all: 
	rm *.o *.elf *.bin
	
clean: 
	rm *.elf *.bin