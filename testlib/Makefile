all:
	 gcc -c testlib.c
	 gcc -c main.c
<<<<<<< HEAD
	 gcc -o main.exe testlib.o main.o
=======
	 gcc -o main testlib.o main.o
>>>>>>> 1c7b23fb994304832e33bdb418ee81d3928b5bb0

test_testlib: clean
	 gcc -c testlib.c
	 gcc -c test_testlib.c
	 gcc -o test_testlib.exe testlib.o test_testlib.o
	 ./test_testlib.exe

test:	 test_testlib

clean:
<<<<<<< HEAD
	 rm a.out main.o main.exe testlib.gch testlib.o test_testlib.o test_testlib.exe student.exe students.exe || exit 0
=======
	 rm *.out *.o *.exe || exit 0
>>>>>>> 1c7b23fb994304832e33bdb418ee81d3928b5bb0

run:
	 gcc -c testlib.c
	 gcc -c main.c
<<<<<<< HEAD
	 gcc -o main.exe testlib.o main.o dict.o
	 ./main.exe
=======
	 gcc -o main.exe testlib.o main.o
	 ./main
>>>>>>> 1c7b23fb994304832e33bdb418ee81d3928b5bb0
