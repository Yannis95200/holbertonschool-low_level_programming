#include <stdio.h>
/**
* main - Entry point
* Return: always 0 (success)
*/
int main(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
	putchar(num);
	if (num == '9')
	continue;

	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
}
