#test  : main
#	export LD_LIBRARY_PATH=/home/mahesh/unix-/sharedLib/numberPro:$LD_LIBRARY_PATH
main : mainUser.o libmy.so
	 gcc -o main mainUser.o -L ./ -lmy
mainUser.o : mainUser.c
	gcc -c mainUser.c
libmy.so : maxmin.o
	gcc -shared -o libmy.so  maxmin.o
maxmin.o : maxmin.c
	gcc -fpic -c maxmin.c
