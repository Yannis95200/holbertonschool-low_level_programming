#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -print en diagonal
 * @a: pointers
 * @size: variable
 */

void print_diagsums(int *a, int size)
{
	int i;
	int dia1 = 0;
	int dia2 = 0;

	for (i = 0; i < size; i++)
	{
		dia1 += a[i * size + i];
		dia2 += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", dia1, dia2);
}
