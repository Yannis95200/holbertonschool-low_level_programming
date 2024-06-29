#include "main.h"
#include <stdio.h>
/**
 * leet - function that encodes a string into 1337.
 * @str: pointers
 * Return: str
 */
char *leet(char *str)
{
	int i, j;
	char a[10] = {'A', 'E', 'O', 'T', 'L', 'a', 'e', 'o', 't', 'l'};
	char b[10] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};

	for (i = 0; str[i] != '\0'; i++)
	{
	for (j = 0; j < 10; j++)
	{
		if (str[i] == a[j])
		{
		str[i] = b[j];
		}
	}
	}
	return str;
}

