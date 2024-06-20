#include "main.h"
/**
*print_alphabet_x10 -prints 10 times the alphabet
*/

void print_alphabet_x10(void)

{
	char alphabet;
	int n;

	for (n = 0; n < 10; n++)
	{
	alphabet = 'a';
	while (alphabet <= 'z')
	{
	_putchar(alphabet);
	n++;
	}
	_putchar('\n');
	}
}

