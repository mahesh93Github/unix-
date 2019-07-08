#main : mainUser.o /home/maheshlinux/unix-/sharedLib/numberPro/libmy.so 
#	LD_LIBRARY_PATH=/home/maheshlinux/unix-/sharedLib/numberPro/ gcc -o main mainUser.c -L/home/maheshlinux/unix-/sharedLib/numberPro/ -lmy 
main : mainUser.o libmy.so
	gcc -o main mainUser.o -L./ -lmy
libmy.so : /home/maheshlinux/unix-/sharedLib/numberPro/maxmin.o /home/maheshlinux/unix-/sharedLib/Findnumber/maxmini.o
	gcc -shared -o libmy.so /home/maheshlinux/unix-/sharedLib/numberPro/maxmin.o /home/maheshlinux/unix-/sharedLib/Findnumber/maxmini.o 
mainUser.o : mainUser.c
	gcc -c mainUser.c
