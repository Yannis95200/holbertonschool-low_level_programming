#include "main.h"

/**
 *print_array -Write a function that prints n elements of an array of integers
 *@a: pointeur to chaine we print
 *@n: is an variable
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i == n - 1)
			continue;
		printf(", ");
	}

	printf("\n");
}
