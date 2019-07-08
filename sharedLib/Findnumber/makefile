
main : mainUser.o libFind.so
	gcc -o main mainUser.o -L ./ -lFind
mainUser.o : mainUser.c
	gcc -c mainUser.c
libFind.so : maxmini.o
	gcc -shared -o libFind.so maxmini.o
maxmini.o : maxmini.c
	gcc -fpic -c maxmini.c

