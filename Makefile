all:tarea

tarea:  split.o
	gcc -std=c99 -o prueba prueba.c split.o

split.o:
	gcc -std=c99 -c split.c

