#include "function_pointers.h"
#include <stdio.h>
/**
 *array_iterator - Executes a function given as a parameter on each element
 *of an array.
 *@array: The array to iterate over.
 *@size: The size of the array.
 *@action: Pointer to a function that takes an int argument and returns void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}

}
