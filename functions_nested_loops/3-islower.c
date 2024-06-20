#include "main.h"
/**
* _islower -checks for lowercase character
*Return: 1 for lowercase character or 0 for anything else
*@c: is char
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
