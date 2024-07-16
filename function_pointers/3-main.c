#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main -Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line arguments.
 * Return: 0 on success, 1 on error.
 */


int main(int argc, char *argv[])
{
	int a;
	int b;
	int sum;
	int (*operation)(int, int);

	if (argc != 4)

	{
		printf("Usage: %s num1 operator num2\n", argv[0]);
		return (1);

	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	operation = get_op_func(argv[2]);

	if (operation == NULL)
	{
		printf("Error\n");
		return (1);
	}

	sum = operation(a, b);

	printf("%d\n", sum);
	return (0);

}
