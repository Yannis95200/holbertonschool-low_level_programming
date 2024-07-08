#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 **create_array -Alloue la mémoire pour une chaîne de caractè
 *@size: Taille de la chaîn allouer.
 *@c:Caractère avec lequel initialiser chaque position de la chaî
 *Return: 0
*/
char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *s;

	s = malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}
	if (s == NULL)
	{
		return (NULL);
	}
	a = 0;
	while (a < size)
	{
		s[a] = c;
		a++;
	}
	return (s);
}
