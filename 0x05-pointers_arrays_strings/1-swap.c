#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: points to first value
 * @b: points to second value
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
