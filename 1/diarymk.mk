a:diary.o diary1.o addrec1.o view.o delete.o
	gcc diary.o diary1.o addrec1.o view.o delete.o
diary.o:diary.c
	gcc -c diary.c
diary1.o:diary1.c
	gcc -c diary1.c
addrec1.o:addrec1.c
	gcc -c addrec1.c
view.o:view.c
	gcc -c view.c
delete.o:delete.c
	gcc -c delete.c