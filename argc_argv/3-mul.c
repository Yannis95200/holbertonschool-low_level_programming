#include <stdio.h>
#include <stdlib.h>
/**
 * main -program that prints its name
 *@argc: variable
 *@argv: pointers
 *Return: 0
*/
int main(int argc, char *argv[])
{
	int a;
	int b;
	int sum;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	sum = (a * b);

		printf("%d\n", sum);
		return (0);

}
