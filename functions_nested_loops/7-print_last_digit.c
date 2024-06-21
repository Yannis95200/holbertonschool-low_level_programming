#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @num : variable entier
 * Return: 0
 */

int print_last_digit(int num)
{
	int last_digit = num % 10;

	if (last_digit < 0)
	{
	last_digit = -last_digit;
	}
	return (last_digit);
}
