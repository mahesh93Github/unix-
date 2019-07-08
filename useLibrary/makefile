#this make file demostrate how to connect/use multiple .so from diffrent directories 
#using library connection command add multiple -L path of library.so which are you want to connect. 
# then after compiling all it generat executable from command and then run that executable 
# at the time of execution set export LD_LIBRARY_PATH = /lib1:/lib2:/lib3:..........
main : mainUser.o
	gcc -o main mainUser.o -L/home/maheshlinux/unix-/sharedLib/ArrayPro -lArr -L/home/maheshlinux/unix-/sharedLib/Findnumber -lFind -L/home/maheshlinux/unix-/sharedLib/numberPro -lmy
mainUser.o : mainUser.c
	gcc -c mainUser.c
