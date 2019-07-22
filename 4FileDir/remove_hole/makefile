exefile : remove_hole.o libfile.a 
	gcc -o exefile remove_hole.o -L ./ -lfile
remove_hole.o : remove_hole.c
	gcc -c remove_hole.c
libfile.a : source.o
	ar rcs libfile.a source.o
source.o : source.c
	gcc -c source.c

clear : 
	rm -f exefile *.o *.a
