#include "main.h"

/**
* _sqrt_recursion - function that returns the natural square root of a number.
* @n: variable
* Return: 1
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (sqrt_helper(n, 0));
}

/**
* sqrt_helper - function used to do recursive calculation
* @m: variable
* @n: varaible
* Return: 1
*/

int sqrt_helper(int n, int m)
{
	if (m * m == n)
	{
		return (m);
	}

	if (m * m > n)
	{
		return (-1);
	}
	return (sqrt_helper(n, m + 1));
}

