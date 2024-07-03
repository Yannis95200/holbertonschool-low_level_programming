#include "main.h"
#include <stdio.h>

/**
 * is_prime_number -Return le natural prime number
 * @n: nombre a calculer
 * Return: resultat
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (_is_prime_i(n, 2));
}

/**
 * _is_prime_i -find prime number
 * @a: is the variable
 * @i: prime number
 * Return: result
 */

int _is_prime_i(int a, int i)
{
	if ((a % i) == 0)
	{
		return (0);
	}
	if ((i * i) > a)
	{
		return (1);
	}
	else
		return (_is_prime_i(a, i + 1));
}
