#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: initial array
 * @accept: second array
 *
 * Return: char with result
 */
unsigned int _strspn(char *s, char *accept)
{
	int a = 0, b = 0;
	unsigned int c = 0;

	while (s[b] != ' ' && s[b] != '\0')
	{
		while (accept[a] != '\0')
		{
			if (s[b] == accept[a])
				c++;
			a++;
		}
		b++;
		a = 0;
	}
	return (c);
}
