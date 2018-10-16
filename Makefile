TARGET = main
.PHONY = clean

${TARGET}: main.o func1.o func2.o
	gcc -o main main.o func1.o func2.o

*.o: *.c
	gcc -g -Wall -o $@ $< -c

clean:
	rm *.o main

