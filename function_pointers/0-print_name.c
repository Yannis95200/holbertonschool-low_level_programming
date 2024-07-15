#include "function_pointers.h"
#include <stdio.h>
/**
* print_name -Calls a function to print a name
* @name: The name to be printed.
* @f: Pointer to a function that takes a char * argument and returns void.
*/

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)

	{
		f(name);
	}

}
