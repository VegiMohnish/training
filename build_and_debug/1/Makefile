all: hello

hello: 1 2 3

1: 
	gcc -E *.c -o test1.i
	cat test1.i
2:
	gcc -S *.c -o test1.s
	cat test1.s

3:
	as *.s -o test1.o
	cat test1.o
clean:
	rm -rf *i *s *o hello
