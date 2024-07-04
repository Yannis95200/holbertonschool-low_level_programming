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

	int somme = 0;
	int i;


	for(i = 1; i < argc ; i++) 
	{	
		if (argv[i][0] <= '0' || argv[i][0] >= '9')
		{
			printf("Error\n");
			return (1);
		}
		somme = somme + atoi(argv[i]);
	}
	printf("%d\n", somme);
	return (0);	
}
