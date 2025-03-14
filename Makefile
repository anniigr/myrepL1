COMPILER = g++
.PHONY: all
all: main_program test
main_program: hello.o main_program.o
	${COMPILER} main_program.o hello.o -o main_program
main_program.o: main_program.cpp 
	${COMPILER} -c main_program.cpp -o main_program.o
hello.o: hello.cpp                                         
	${COMPILER} -c hello.cpp -o hello.o
libhello.so: hello.o
	${COMPILER} -shared hello.o -o libhello.so

test: test.o strings.o vectors.o liboperations.a
	${COMPILER} test.o strings.o vectors.o -L. -loperations -o test
test.o: test.cpp
	${COMPILER} -c test.cpp -o test.o
strings.o: strings.cpp
	${COMPILER} -c strings.cpp -o strings.o
vectors.o: vectors.cpp
	${COMPILER} -c vectors.cpp -o vectors.o
liboperations.a: vectors.o strings.o
	ar rcs liboperations.a vectors.o strings.o
	


.PHONY: clean
clean:
	rm -rf main_program main_program.o hello.o
	rm -rf libhello.so
	rm -rf test test.o strings.o vectors.o
	rm -rf operations.o liboperations.a