#create preprocessed files
arm-none-eabi-gcc.exe -E ./main.c -o ./main.i
arm-none-eabi-gcc.exe -E ./uart.c -o ./uart.i

#define Compiler and Assembler flags
GCC_Flags="-mcpu=arm926ej-s -c -I. -nostdlib"
ASM_Flags="-mcpu=arm926ej-s -M"

#create object files
arm-none-eabi-as.exe $ASM_Flags ./startup.s -o ./startup.o
arm-none-eabi-gcc.exe $GCC_Flags ./main.c -o main.o
arm-none-eabi-gcc.exe $GCC_Flags ./uart.c -o uart.o


#create objdump files
arm-none-eabi-objdump.exe -h ./startup.o > ./start.txt
arm-none-eabi-objdump.exe -h ./main.o > ./main.txt
arm-none-eabi-objdump.exe -h ./uart.o > ./uart.txt


#extract the symbol table of each object
arm-none-eabi-nm.exe ./main.o > mainSTable.txt
arm-none-eabi-nm.exe ./uart.o > uartSTable.txt
arm-none-eabi-nm.exe ./startup.o > startupSTable.txt

#link and produce the map file
arm-none-eabi-ld.exe -T ./linker_script.ld -Map=Map_File.map ./startup.o ./main.o ./uart.o -o ./Azazy.elf


#convert elf to bin file
arm-none-eabi-objcopy.exe  -O binary ./Azazy.elf ./Azazy.bin


#run the simulation
qemu-system-arm.exe -M versatilepb -m 128M -nographic -kernel ./Azazy.elf

