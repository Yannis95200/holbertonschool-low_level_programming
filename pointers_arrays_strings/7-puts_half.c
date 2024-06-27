#include "main.h"

/**
 *puts_half -Write a function that prints half of a string
 *@str: pointeur to chaine we print
 */

void puts_half(char *str)
{
	int len = 0;
	int m, x;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2  == 0)
	{
		m = len / 2;
	}

	else
	{
		m = (len - 1) / 2 + 1;
	}

	for (x = m; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}

	_putchar('\n');
}
