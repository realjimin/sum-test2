#Makefile
all: sum-test

sum-test: sum.o main.o
	g++ -o sum-test sum.o main.o

main.o: sum2.h main2.cpp
sum.o: sum2.h sum2.cpp

clean:
	rm -f sum-test
	rm -f *.o
