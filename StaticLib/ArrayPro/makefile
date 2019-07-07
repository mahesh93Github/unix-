mainuser : mainuser.o libmy.a
	gcc -o mainuser mainuser.o -L ./ -lmy
mainuser.o : mainuser.c
	gcc -c mainuser.c
libmy.a : ArrayLib.o
	ar rcs libmy.a ArrayLib.o
ArrayLib.a : ArrayLib.o
	gcc -c ArrayLib.c
