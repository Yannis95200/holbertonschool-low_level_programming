#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: pointers
 * Return: str
 */
char *cap_string(char *str)
{
	int i = 0;
	int j;
	char separators[] = " \t\n,;.!?\"(){}";

	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] = str[i] - ('a' - 'A');
	}
		i++;

	while (str[i] != '\0')
	{
	for (j = 0; separators[j] != '\0'; j++)
	{
	if (str[i - 1] == separators[j] && str[i] >= 'a' && str[i] <= 'z')
	{
	str[i] = str[i] - ('a' - 'A');
		break;
	}
	}
	i++;
	}

	return (str);
}
