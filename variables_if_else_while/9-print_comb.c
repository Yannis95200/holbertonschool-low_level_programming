#include <stdio.h>
/**
* main - Entry point
* Return: always 0 (success)
*/
int main(void)
{
	char num;

	for (num = 0; num < 10; num++)
		putchar(num);

	putchar(',');
	putchar('\n');
	return (0);
}
