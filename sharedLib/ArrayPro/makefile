main : mainUser.o libArr.so
	LD_LIBRARY_PATH=/home/maheshlinux/unix-/sharedLib/ArrayPro gcc -o main mainUser.o -L ./ -lArr
mainUser.o : mainUser.c
	gcc -c mainUser.c
libArr.so : ArrayLib.o
	gcc -shared -o libArr.so ArrayLib.o
ArrayLib.o : ArrayLib.c
	gcc -fpic -c ArrayLib.c
