#include "main.h"
/**
*more_numbers -prints 10 times the numbers, from 0 to 14
*/

void more_numbers(void)

{
	int num;
	int n;

	for (n = 0; n <= 9; n++)
	{
		for (num = 0; num  <= 14; num++)
		{
			if (n > 14)
			{
				_putchar (num % 10 + 0);
				_putchar (num / 10 + 0);
			}
		}
	}	_putchar('\n');

}
