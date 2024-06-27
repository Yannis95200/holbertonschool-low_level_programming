#include "main.h"

/**
 *_strcpy  -copies the string pointed to by src
 *@src: pointer
 *@dest: pointer
 *Return: a
 */

char *_strcpy(char *dest, char *src)
{
	char *a = dest;

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';

	return (a);
}
