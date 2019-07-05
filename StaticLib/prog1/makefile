main : main.c mylib.a
	gcc -I ./ -o main main.c mylib.a
mylib.a : Display.o
	 ar -crv mylib.a Display.o
Display.o : Display.c
	gcc -c Display.c

