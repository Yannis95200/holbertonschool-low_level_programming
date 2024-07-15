#include "function_pointers.h"
#include <stdio.h>
/**
 *array_iterator - Executes a function given as a parameter on each element
 *of an array.
 *@array: The array to iterate over.
 *@size: The size of the array.
 *@action: Pointer to a function that takes an int argument and returns void.
 */


int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		return (i);
	}
	return (-1);

}
