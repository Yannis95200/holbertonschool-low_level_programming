#include "main.h"

/**
* _pow_recursion -function that returns the factorial of a given number
* @x: variable
* @y: variable
* Return: 1
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	else
		return (_pow_recursion(x, y - 1) * x);
}
