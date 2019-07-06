
main : mainUser.o libmy.so
	gcc -o main mainUser.o -L ./ -lmy
mainUser.o : mainUser.c
	gcc -c mainUser.c
libmy.so : maxmini.o
	gcc -shared -o libmy.so maxmini.o
maxmini.o : maxmini.c
	gcc -fpic -c maxmini.c

