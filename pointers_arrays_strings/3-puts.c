#include "main.h"
/**
*_puts -Write a function that prints a string, followed by a new line
*@str: is a variable
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar (*str);
	}
		str++;

	_putchar ('\n');
}
