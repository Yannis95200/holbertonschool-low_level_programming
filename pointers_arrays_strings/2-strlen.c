#include "main.h"
/**
*_strlen -Write a function that returns the length of a string.
*@s: is a variable
*Return: length
*/
int _strlen(char *s)
{
	int length = 0;

	for (; *s != '\0'; s++)
	length++;
	{
	return (length);

	}
}
