#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of arguments passed to the function.
 * Return: The sum of all parameters. If n is 0, return 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int total;
	unsigned int  i;


	if (n == 0)
	{
		return (0);
	}

	va_start(ap, n);

	total = 0;

	i = 0;


	while (i < n)
	{

		total += va_arg(ap, int);

		i++;
	}

	return (total);

}
