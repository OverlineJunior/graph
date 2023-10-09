all: main.exe run

main.exe: main.c ../graph.c ../libs/maybe_int.c
	@clang -Wall -o main.exe main.c ../graph.c ../libs/maybe_int.c

run: main.exe
	@./main.exe
