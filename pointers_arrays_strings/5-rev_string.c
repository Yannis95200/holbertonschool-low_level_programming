#include "main.h"
/**
 * rev_string  -Write a function that reverses a string
 * @s: is an pointers
 */

void rev_string(char *s)
{
	int length = 0;
	int i, j;
	char temp;

	while (s[length] != '\0')
	{
	length++;
	}
	for (i = 0, j = length - 1; i < j; i++, j--)
	{
	temp = s[i];
	s[i] = s[j];
	s[j] = temp;
	}
}
