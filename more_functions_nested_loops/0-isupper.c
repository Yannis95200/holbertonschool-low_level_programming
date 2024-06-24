#include "main.h"

/**
* _isupper -checks for uppercase character
*Return: 1 for lowercase character or 0 for anything else
*@c: is char
*/

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	return (0);
}
