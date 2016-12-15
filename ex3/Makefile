generalSwap: generalSwap.o
	gcc -Wall -std=c99 -g generalSwap.o -o ./generalSwap

generalSwap.o: generalSwap.c
	gcc -Wall -std=c99 -g -c ./generalSwap.c
	
GenRangeTree.o: GenRangeTree.c GenRangeTree.h Manager.h
	gcc -Wall -std=c99 -g -c ./GenRangeTree.c

GenRangeTree: GenRangeTree.o
	ar rcs libGenRangeTree.a ./GenRangeTree.o ./Manager.o

tests: GenRangeTree.o
	gcc -Wall -std=c99 -g GenRangeTree.o Manager.o -o GenRangeTree
	./GenRangeTree

clean:

tar: generalSwap.c GenRangeTree.c GenRangeTree.h Makefile valdbg.out
	tar cfv ex3.tar ./generalSwap.c ./GenRangeTree.c ./GenRangeTree.h ./Makefile ./valdbg.out
	
	
.PHONY: tar clean tests GenRangeTree
