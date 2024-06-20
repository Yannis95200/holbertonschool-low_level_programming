#include "main.h"
/**
*_isalpha -checks for alphabetic character
*Return: 1 if lower or upper, 0 if else
*@c: is char
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
