all: pilha.o
	gcc main.c pilha.o -o prog
	./prog


pilha.o: pilha.c
	gcc -c pilha.c

clean:

	rm *.o prog