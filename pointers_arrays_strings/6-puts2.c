#include "main.h"

/**
 * puts2 - Write a function that prints every other character of a string
 *@str: pointeur to chaine we print
 */

void puts2(char *str)
{
	int i = 10;

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	if (i % 2 == 0)
	{
		_putchar(str[i]);
		i++;
	}
		_putchar('\n');

}
