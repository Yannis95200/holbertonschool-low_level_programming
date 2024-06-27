#include "main.h"

/**
 * _atoi - convertit le début de la chaîne point
 * @s: The string to be converted.
 * Return:( a * b)
 */
int _atoi(char *s)
{
	int a = 0;
	int b = 1;
	int c = 0;

	while (*s)
	{
	if (*s == '-' && !c)
	{
	b *= -1;
	}
	else if (*s >= '0' && *s <= '9')
	{
	c = 1;
	a = a * 10 + (*s - '0');
	}
	else if (c)
	{
	break;
	}
	s++;
	}
	return (a * b);
}
