#include "main.h"
/**
 *_strcat -copies the string  pointed to by src
 *@src: pointer
 *@dest: pointer
 *Return: a
 */

char *_strcat(char *dest, char *src)
{
	char *a = dest;

	while (*dest != '\0')
	{
		++dest;
	}

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';

	return (a);
}
