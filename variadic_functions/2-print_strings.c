#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - Prints strings followed by a separator.
 * @separator: The string to be printed between the strings.
 * @n: The number of strings passed to the function.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{

	va_list ap;
	char *total;
	unsigned int i;

	va_start(ap, n);

	while (i < n)
	{
		total = va_arg(ap, char *);


		if (total == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", total);
		}

		if (separator != NULL && i < n - 1)

		{
			printf("%s", separator);

		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
