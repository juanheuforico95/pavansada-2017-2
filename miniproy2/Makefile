LIB := $(shell find ./lib -name '*.o')
all:
	 gcc -c perfectnumber.c
	 gcc -c main.c
	 gcc -o perfectnumber.exe perfectnumber.o main.o $(LIB)

test_perfectnumber: clean
	 gcc -c perfectnumber.c
	 gcc -c test_perfectnumber.c
	 gcc -o test_perfectnumber.exe perfectnumber.o test_perfectnumber.o
	 ./test_perfectnumber.exe

test:	 test_perfectnumber

clean:
	 rm *.out *.o *.exe || exit 0

perfectnumber: clean
	 gcc -c perfectnumber.c
	 gcc -c main.c
	 gcc -o perfectnumber.exe perfectnumber.o main.o $(LIB)

run: perfectnumber
	 ./perfectnumber.exe

runtest: perfectnumber
	 ./integrationtest.tcl ./perfectnumber.exe

