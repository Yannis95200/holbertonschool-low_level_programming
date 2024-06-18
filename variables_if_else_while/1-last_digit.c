#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
* Return: always 0 (success)
*/
int main(void)
{
	int n,last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last_digit = n % 10;
	if (n > 5)
	{
		printf("Last digit of %d and is %d greater than 5\n", last_digit, n);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d zero \n", last_digit, n);
	}
	else if (n < 6)
	{
		printf("last digit of %d and is %d less than 6 and not 0 \n", last_digit, n);
	}

	return (0);
}
