#include "main.h"
/**
*more_numbers -prints 10 times the numbers, from 0 to 14
*/

void more_numbers(void)

{
	int num;
	int n;

	for (num = 0; num <= 9; num++)
	{
		for (n = 0; n <= 14;  n++)
		{
			if (n >= 10)
			{
				_putchar('0' + n / 10);
			}
				_putchar('0' + n % 10);
		}
		_putchar('\n');
	}
}
