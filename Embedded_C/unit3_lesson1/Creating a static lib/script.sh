
#create preprocessed files
./gcc.exe -E ./main.c -o main.i
./gcc.exe -E  ./mylib.c -o mylib.i


#create object files 
# -c is important here to tell the compile to compile without linking
./gcc.exe -c  mylib.c -o mylib.o
./gcc.exe -c  main.c -o main.o


#create a mylib
./ar.exe rcs	mylib.a   mylib.o 

#link and produce executable 
./gcc.exe main.o mylib.a -o main.exe 

#run the executable
./main.exe