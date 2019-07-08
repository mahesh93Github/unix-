main : mainUser.o libmy.so
	LD_LIBRARY_PATH=/home/maheshlinux/unix-/sharedLib/ArrayPro gcc -o main mainUser.o -L ./ -lmy
mainUser.o : mainUser.c
	gcc -c mainUser.c
libmy.so : ArrayLib.o
	gcc -shared -o libmy.so ArrayLib.o
ArrayLib.o : ArrayLib.c
	gcc -fpic -c ArrayLib.c
