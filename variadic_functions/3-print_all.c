#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *  * print_char - Prints a character
 *   * @ap: The va_list containing the character to print
 */

void print_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 *  * print_integer - Prints an integer
 *   * @ap: The va_list containing the integer to print
 */

void print_integer(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 *  * print_float - Prints a float
 *   * @ap: The va_list containing the float to print
 */

void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 *  * print_string - Prints a string
 *   * @ap: The va_list containing the string to print
 */

void print_string(va_list ap)
{
	char *s = va_arg(ap, char*);

	if (!s)
		s = "(nil)";
	printf("%s", s);
}

/**
 *  * print_all - Prints anything according to the given format
 *   * @format: A list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	sp_t spt[] = {
		{'c', print_char},
		{'i', print_integer},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL},
	};

	va_list ap;
	int index = 0, j;
	char *separator = "";

	va_start(ap, format);

	while (format && format[index])
	{
		j = 0;
		while (spt[j].specifi)
		{
			if (format[index] == spt[j].specifi)
			{
				printf("%s", separator);
				spt[j].print_func(ap);
				separator = ", ";
				break;
			}
			j++;
		}
		index++;
	}
	va_end(ap);
	printf("\n");


}
