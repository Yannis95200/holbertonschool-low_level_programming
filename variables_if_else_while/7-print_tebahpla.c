#include <stdio.h>
/**
* main - Entry point
* Return: always 0 (success)
*/
int main(void)
{
	char alphabet;

	{
	for (alphabet = 'z'; alphabet <= 'a'; alphabet++)
	putchar (alphabet);
	}

	putchar ('\n');
	return (0);
}
