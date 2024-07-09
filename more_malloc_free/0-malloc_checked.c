#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
*malloc_checked- Alloue de la méoire l'aide de mallc
*@b: Le nombre d'octects allouer
*Return: Un pointeur vers la méoire
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{

		exit(98);
	}
	return (ptr);
}
