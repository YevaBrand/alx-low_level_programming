#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: first string
 * @accept: second string
 *
 * Return: char with result
 */
char *_strpbrk(char *s, char *accept)
{
	int a = 0;

	while (*s)
	{
		while (accept[a] != '\0')
		{
			if (*s == accept[a])
				return (s);
			a++;
		}
		a = 0;
		s++;
	}
	return ('\0');
}
