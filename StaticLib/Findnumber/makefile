
main : mainUser.o libmy.a
	gcc -o main mainUser.o -L ./ -lmy
mainUser.o : mainUser.c
	gcc -c mainUser.c

libmy.a : maximum.o minimum.o
	ar rcs libmy.a maximum.o minimum.o

maximum.o : maximum.c
	gcc -c maximum.c
minimum.o : minimum.c
	gcc -c minimum.c

