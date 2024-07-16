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
		printf("Error\n");
		exit(98);

	}
	
	operation = get_op_func(argv[2]);
	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	sum = operation(a, b);
	printf("%d\n", sum);
	return (0);

}
