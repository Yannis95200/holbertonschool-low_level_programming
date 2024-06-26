#include "main.h"
/**
*swap_int -Write a function that swaps the values of two integersi
*@a: is a variable
*@b: is variable
*/

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}
