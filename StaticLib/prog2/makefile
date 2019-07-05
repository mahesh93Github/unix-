
mainUser : mainUser.o libmylib.a
	gcc -o mainUser mainUser.o -L./ -lmylib
mainUser.o : mainUser.o
	gcc -c mainUser.c

libmylib.a : staticLib.o staticLib2.o staticLib3.o
	ar rcs libmylib.a staticLib.o staticLib2.o staticLib3.o

staticLib.o : staticLib.c
	gcc -c staticLib.c
staticLib2.o : staticLib2.c
	gcc -c staticLib2.c
staticLib3.o : staticLib3.c
	gcc -c staticLib3.c
