#include "main.h"
#include <stdio.h>

/**
 *_memset - function copies n bytes from memory area src to memory area dest
 * @s: pointers
 * @b: caractere
 * @n: octet
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

		for (i = 0; i < n; i++)
		{
			s[i] = b;
		}
			return (s);
}
