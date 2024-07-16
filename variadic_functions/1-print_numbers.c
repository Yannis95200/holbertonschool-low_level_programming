#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - Prints numbers followed by a separator.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 */

void print_numbers(const char *separator, const unsigned int n, ...)

{
	va_list ap;
	int total;
	unsigned int i;

	if (separator == NULL)
	{
		;
	}

	va_start(ap, n);

	while (i < n)
	{
		total = va_arg(ap, int);
		printf("%d", total);
		if (separator && i < n - 1)
			printf("%s", separator);
		i++;

	}
	printf("\n");
	va_end(ap);

}
