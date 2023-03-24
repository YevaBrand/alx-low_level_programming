#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the numbers from 1 to 100
 * multiples of 3 print Fizz instead of the number
 * multiples of 5 print Buzz instead of the number
 * multiples of both 3 & 5 print FizzBuzz instead of the number
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf(" Fizz");
		else if (i % 5 == 0)
			printf(" Buzz");
		else if ((i % 3 == 0) && (i % 5 == 0))
			printf(" FizzBuzz");
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
