#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 **_calloc -Alloue de la mémoire pou un tab initialie zero
 * @nmemb: nb d'elements a allouer
 * @size: Taille en octets de chaque element
 * Return: point vers le tab allouer et initialise a zero
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total_size = nmemb * size;
	unsigned int i;
	void *ptr = malloc(total_size);
	char *char_ptr = (char *)ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < total_size; i++)
	{
		char_ptr[i] = 0;

	}

	return (ptr);
}
