# Makefile for building codebase

run: linker
# Run the executable file.
	./a.exe

linker: assembler
# Link the relocatable files and place output in a.exe file.
	gcc other.o main.o -o a.exe

assembler: compile
# Generate relocatble object files from the codebase.
	as other.s -o other.o
	as main.s -o main.o

compile: preprocessor
# Compile only; do not assemble or link.
	gcc -S other.c
	gcc -S main.c

preprocessor: 
# Preprocess only; do not compile, assemble or link.
	gcc -E other.c
	gcc -E main.c

clean: 
# Remove all output files from codebase
	rm -rf *.exe
	rm -rf *.o 
	rm -rf *.s
#Linux terminal command to clear the terminal
	clear
	