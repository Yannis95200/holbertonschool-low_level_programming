#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - Adds two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The sum of a and b.
 */

int op_add(int a, int b)
{
	return (a + b);

}

/**
 * op_sub - Subtracts the second integer from the first.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The difference of a and b.
 */

int op_sub(int a, int b)
{
	return (a - b);

}
/**
 * op_mul - Multiplies two integers.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Divides the first integer by the second.
 * @a: The numerator.
 * @b: The denominator.
 *
 * Return: The result of a divided by b.
 *         Note: Division by zero is not handled here.
 */

int op_div(int a, int b)
{	
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	
	}
	return (a / b);
}
/**
 * op_mod - Computes the modulus of the first integer by the second.
 * @a: The numerator.
 * @b: The denominator.
 *
 * Return: The remainder of a divided by b.
 *         Note: Modulus by zero is not handled here.
 */
int op_mod(int a, int b)
{	
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
