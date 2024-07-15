#include "function_pointers.h"
#include <stdio.h>
/**
 *int_index -Searches for an integer in an array.
 *@array: The array to search through.
 *@size: The number of elements in the array.
 *@cmp: Pointer to a function that takes an
 * int as an argument and returns an int
 *Return: The index of the first element for which
 *the cmp function does not return 0,
 * or -1 if no element matches or if input parameters are invalid.
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
