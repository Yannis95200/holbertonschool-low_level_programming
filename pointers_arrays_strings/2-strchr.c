#include "main.h"
/**
* *_strchr -function returns a pointer
 * @s: pointers
 * @c: pointers
 * Return: s
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}

		s++;
	}

	if (c == '\0')
	{
		return (s);

	}

	return (NULL);

}

