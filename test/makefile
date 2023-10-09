all: main.exe run

main.exe: main.c ../graph.c
	@clang -Wall -o main.exe main.c ../graph.c

run: main.exe
	@./main.exe
