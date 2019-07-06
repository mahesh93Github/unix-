mainOut : main.o libmy.a
	gcc -o mainOut main.o -L ./ -lmy
main.o : main.c
	gcc -c main.c
libmy.a : maxint.o maxthree.o mintwo.o minthree.o
	ar rcs libmy.a maxint.o maxthree.o mintwo.o minthree.o
maxint.o : maxint.c
	gcc -c maxint.c
maxthree.o : maxthree.c
	gcc -c maxthree.c
mintwo.o : mintwo.c
	gcc -c mintwo.c
minthree.o : minthree.c
	gcc -c minthree.c
