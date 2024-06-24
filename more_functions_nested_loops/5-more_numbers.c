#include "main.h"
/**
*more_numbers -prints 10 times the numbers, from 0 to 14
*/

void more_numbers(void)

{
	int num;
	int n;

	for (n = 1; n <= 10; n++)

	for (num = 0; num  <= 14; num++)
	{		_putchar((num % 10) + '0');
			_putchar((n % 10) + '0');
			_putchar('\n');
	}
}
