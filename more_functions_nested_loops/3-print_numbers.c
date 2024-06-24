#include "main.h"

/**
* print_numbers -prints the numbers, from 0 to 9
* Return: 0
*/
void print_numbers(void)
{
	for (num = 0; num < 10; num++)
		_putchar(num + '0');

	_putchar('\n');

	return (0);
}
