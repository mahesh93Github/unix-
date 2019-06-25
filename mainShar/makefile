libmy.so : shar.o
	gcc -shared -o libmy.so shar.o
shar.o : shar.c
	gcc -c -Wall -Werror -fpic shar.c
