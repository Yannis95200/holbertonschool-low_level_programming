/**
 * _strspn - function that gets the length of a prefix substring.
 * @s:pointer
 * @accept:character
 * Return: count
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i;
	int k;

	while (*s)
	{
		k = 0;
		for (i = 0; accept[i]; i++)
		{
		if (*s == accept[i])
			{
			k = 1;
			break;
			}
		}
		if (!k)
		{
		break;
		}
		count++;
		s++;
		}
	return (count);
}
