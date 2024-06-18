#include <stdio.h>
/**
* main - Entry point
* Return: always 0 (success)
*/
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
	printf("%d", x);
	if (x < 9)
	{
	printf(",");
	}

	}
	printf("\n");
	return (0);
}
