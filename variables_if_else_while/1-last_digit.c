#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
* Return: always 0 (success)
*/
int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last = n % 10;
	if (last > 5)
	{
		printf("Last digit of %d is %d and is greater than 5 \n", last, n);
	}
	else if (last == 0)
	{
		printf("Last digit of %d is %d and is zero \n", last, n);
	}
	else if (last < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0 \n", last, n);
	}

	return (0);
}
