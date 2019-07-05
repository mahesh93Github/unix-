userPro : libmylib.so userPro.o
	gcc -o userPro userPro.o -L./ -lmylib
userPro.o : userPro.c
	gcc -c userPro.c
libmylib.so : shared.o sharedmult.o sharedSub.o shareddiv.o
	gcc -shared -o libmylib.so shared.o sharedmult.o sharedSub.o shareddiv.o
shared.o : shared.c
	gcc -fpic -c shared.c
shredmult.o : sharedmult.c
	gcc -fpic -c sharedmult.c
sharedSub.o : sharedSub.c
	gcc -fpic -c sharedSub.c
shareddiv.o : shareddiv.c
	gcc -fpic -c shareddiv.c

