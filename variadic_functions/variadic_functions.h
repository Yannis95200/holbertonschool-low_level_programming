#ifndef HEADER_FILE
#define HEADER_FILE
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/**
 *struct format_sp - Struct for format specifiers and corresponding functions
 *@specifi: The format specifier character
 *@print_func: The function to call for printing the specified type
*/

typedef struct format_sp
{
		char specifi;
			void (*print_func)(va_list ap);
} sp_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list ap);
void print_integer(va_list ap);
void print_float(va_list ap);
void print_string(va_list ap);
#endif
