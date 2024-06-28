#include "main.h"
/**
 *_strncat -ajoute la chaîne sr la fin de la chaîne dest en écrasant l'octet
 *@src: pointer
 *@dest: pointer
 *@n:  contains bytes
 *Return: a
 */
char *_strncat(char *dest, char *src, int n)
{
	char *a = dest;

	while (*dest != '\0')
	{
	dest++;
	}

	while (n > 0 && *src != '\0')

	{
	*dest = *src;
	dest++;
	src++;
	n--;
	}
	*dest = '\0';

	return (a);
}
