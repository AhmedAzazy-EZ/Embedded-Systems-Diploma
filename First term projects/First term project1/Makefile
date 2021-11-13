CC=arm-none-eabi-
CFLAGS=-mcpu=cortex-m3 -c -gdwarf-2
INCS = -I.
SRC=$(wildcard *.c)
OBJ=$(SRC:.c=.o)
AS=$(wildcard *.s)
ASOBJ=$(AS:.s=.o)
LIBRARY=
Project_Name=learn-in-depth

all:$(Project_Name).bin

%.o:%.c
	$(CC)gcc.exe	$(INCS) $(CFLAGS) $< -o $@

%.s:%.o
	$(CC)as.exe	    $(CCFLAGS) $< -o $@

$(Project_Name).elf:$(OBJ)
	$(CC)ld.exe -T linker.ld -Map=Map_file.map $(LIBRARY) $(OBJ) $(ASOBJ) -o $@

$(Project_Name).bin:$(Project_Name).elf
	$(CC)objcopy.exe  -O binary $< $@

clean:
	rm *.o *.elf
 