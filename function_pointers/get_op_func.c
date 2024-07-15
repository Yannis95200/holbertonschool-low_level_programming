#include "function_pointers.h"
#include <stdio.h>
/**
 *array_iterator - Executes a function given as a parameter on each element
 *of an array.
 *@array: The array to iterate over.
 *@size: The size of the array.
 *@action: Pointer to a function that takes an int argument and returns void.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i;

    while (ops[i].op != NULL)
    {   
	    if (s(ops[i]).f)
		return (i);	
    }	


	return (NULL);
}
