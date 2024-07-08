#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *_strdup - Duplique une chaîne de caractèr
 *@str: La chaîe dupliqer
 *Return: Pointeur vers la chaîne dupliquée ou NULL si `str` est LL
*/

char *_strdup(char *str)
{
	int i;
	char *a;
	int len;

	len = 0;
	a = (char *)malloc(sizeof(char) * len);
	if (str == NULL)
	{
		return (NULL);
	}
	if (a == NULL)
	{
		return (NULL);

	}
	while (str[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		a[i] = str[i];
	}
	a[i] = '\0';
	return (a);
}

