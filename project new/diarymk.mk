a:diary.o diary1.o addrec2.o edit.o del.o
	gcc diary.o diary1.o addrec2.o edit.o del.o
diary.o:diary.c
	gcc -c diary.c
diary1.o:diary1.c
	gcc -c diary1.c
addrec2.o:addrec2.c
	gcc -c addrec2.c
edit.o:edit.c
	gcc -c edit.c
del.o:del.c
	gcc -c del.c