#include "main.h"

/**
 *_strcat -copies the stringi pointed to by src
 *@src: pointer
 *@dest: pointe00r
 *Return: a
 */
char *_strcat(char *dest, char *src)

{
	char *a = dest;

	while (*dest != '\0')
	{
		*src = *dest;
		src++;
		dest++;
	}
	*src = '\0';

	return (a);
}
