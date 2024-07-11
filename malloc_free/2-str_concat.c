#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *str_concat - Concatène deux chaînes de caractè
 *@s1: La première chaî concaténe
 *@s2: La deuxième chine� cont�ner
 *Return:Pointeur vers la nouvelle chaîne concatén
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	int len1 = 0, len2 = 0;
	char *result;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	result = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	if (result == NULL)
	{
		return (NULL);
	}
	while (s1 != NULL && s1[i] != '\0')
	{
		result[i] = s1[i];
		i++;
	}

	while (s2 != NULL && s2[j] != '\0')
	{
		result[i + j] = s2[j];
		j++;
	}
	result[i + j] = '\0';
	return (result);
}
