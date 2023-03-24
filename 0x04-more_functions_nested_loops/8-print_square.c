#include "main.h"

/**
 * print_square - this function prints a square, followed by a new line
 * @size: size of the square
 * Return: square
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int w, l;

		for (w = 0; w < size; w++)
		{
			_putchar('#');
			for (l = 0; l <= size; l++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
