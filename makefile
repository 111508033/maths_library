project: maths.o project.o
	 gcc maths.o project.o -o project

maths.o: maths.h maths.c
	   gcc -c maths.c

project.o:  maths.h project.c
	 gcc -c project.c

clean: 
	rm project *.o
