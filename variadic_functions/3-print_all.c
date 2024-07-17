#include "variadic_functions.h"

/**
 *  * print_char - prints character.
 *   * @ap: variable arguments.
 *    */

void print_char(va_list ap)

{
	printf("%c", va_arg(ap, int));
}

void print_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

void print_int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

void print_string(va_list ap)
{
	char	*s = va_arg(ap, char*);

	if (s == NULL)
		
		s = "(nil)";
	
	printf("%s", s);
}

void print_all(const char * const format, ...)
{
	fo_t fos[] = {
		{'c', print_char},
		{'f', print_float},
		{'i', print_int},
		{'s', print_string},
		{'\0', NULL}
	};

	va_list ap;
	int	i = 0, j;
	char	*separator = "";

	va_start(ap, format);
	while (format && format[i])
	{
		j = 0;
		while (fos[j].fo)
		{
			if (format[i] == fos[j].fo)
			{
				printf("%s", separator);
				fos[j].print_func(ap);
				separator = ", ";
				break;
			}
			j++;
		}
		index++;
	}
	va_end(ap);
	printf("\n");

