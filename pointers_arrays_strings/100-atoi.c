#include "main.h"

/**
 * _atoi - convertit le début de la chaîne point
 * @s: The string to be converted.
 * Return:( a * b)
 */
int _atoi(char *s)

{
	int sign;
	int num;
	char *temp;

	temp = s;
	num = 0;
	sign = 1;

	while (*temp != '\0' && (*temp < '0' || *temp > '9'))
	{
	if (*temp == '-')
	{
	sign *= -1;
	}
	temp++;
	}
	while (*temp >= '0' && *temp <= '9')
	{
	num = num * 10 + (*temp - '0');
	temp++;
	}
	return (num * sign);
}
