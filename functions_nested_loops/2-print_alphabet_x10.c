#include "main.h"
/**
*print_alphabet_x10 -prints 10 times the alphabet
*/

void print_alphabet_x10(void)

{
	char alphabet;
	int n;

	for (n = 1; n < 10; n++)
	{

	for (alphabet = 'a'; alphabet <= 'z';)

	{
	_putchar(alphabet);
	n++;
	}
	_putchar('\n');
	}
}
