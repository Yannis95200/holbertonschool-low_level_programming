#include <stdio.h>
/**
* main - Entry point
* Return: always 0 (success)
*/
int main(void)
{
	char hex[] = "0123456789abcdef";
	int h;


	for (h = 0; h < 16; h++)
	putchar(hex[h]);

	putchar ('\n');
	return (0);
}
