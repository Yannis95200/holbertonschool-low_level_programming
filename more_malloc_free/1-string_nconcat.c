#include "main.h"
#include <stdlib.h>
/**
*string_nconcat - concatÃne deux chaine de caracter
*@s1: la premiere chaine de caractere
*@s2: la deuxieme de chaine de caractere
*@n: nombre d'octects de s2 a concatener a s1
*Return: result
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0;
	unsigned int  len1 = 0, len2 = 0;
	char *result = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
	n = len2;

	result = malloc(sizeof(char) * (len1 + n + 1));

	if (result == NULL)
		return (NULL);
	while (i < len1)
	{
		result[i] = s1[i];
		i++;
	}
	while (j < n)
	{
	result[i + j] = s2[j];
	j++;
	}
	result[i + j] = '\0';
	return (result);
}
