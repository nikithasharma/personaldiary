a:diary.o diary1.o
	gcc diary.o diary1.o
diary.o:diary.c
	gcc -c diary.c
diary1.o:diary1.c
	gcc -c diary1.c