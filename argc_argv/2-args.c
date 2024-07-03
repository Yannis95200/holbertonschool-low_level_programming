#include <stdio.h>
#include "main.h"
/**
 * main -program that prints its name
 *@argc: variable
 *@argv: pointers
 *Return: 0
*/

int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
