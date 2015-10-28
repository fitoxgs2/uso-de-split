#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "split.h"

//IMPORTANTE **sueltas accede a la primera letra de la palabra es un string
//            *sueltas apunta a la palabra

int main()
{
	char hola[]="wena naty ctmaaaaaa";
	size_t largo=strlen(hola);
	size_t *p=malloc(sizeof(size_t));
	char **sueltas;
	sueltas=split(hola,largo,' ',p);
	for(int i=0; i<*p; i++)
	{
		printf("%s\n",*sueltas);
		sueltas++;
	}
	return 0;
}
