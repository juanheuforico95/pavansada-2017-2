all:
	 gcc -c maxones.c
	 gcc -c main.c
	 gcc -o main maxones.o main.o

test_maxones: clean
	 gcc -c maxones.c
	 gcc -c test_maxones.c
	 gcc -o test_maxones.exe maxones.o test_maxones.o
	 ./test_maxones.exe

test:	 test_maxones

clean:
	 rm *.out *.o *.exe || exit 0

run:
	 gcc -c maxones.c
	 gcc -c main.c
	 gcc -o main.exe maxones.o main.o
	 ./main
