#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 * _putchar used only 3 times
 * Return: 0-14, 10 times, followed by new line
 */
void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
