#ifndef HEADER_FILE
#define HEADER_FILE

#include <unistd.h>
typedef struct fo
{
	char spe;
	void (*print_func)(va_list ap)
}fo_t


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...)o
#endif
