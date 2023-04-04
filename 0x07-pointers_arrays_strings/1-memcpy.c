#include "main.h"
/**
 *_memcpy - function that copies memory area
 * @dest: destnation memory
 * @src: source memory
 * @n: num of bytes
 *
 * Return: char with result of memset
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}