#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 *
 * Description: This function uses recursion to print the binary
 * representation of a number.
 */

void print_binary(unsigned long int n)
{
	unsigned long value = n;

	if (value > 1)
	{
		print_binary(value >> 1);
	}
	_putchar((value & 1) + '0');
}
