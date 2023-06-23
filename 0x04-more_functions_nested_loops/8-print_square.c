#include "main.h"
/**
 * print_square -  prints a square, followed by a new line.
 * @size: integer parameter
 * Return: Always 0
 */
void print_square(int size)
{
	int i, hash;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (i = 0; i < size; i++)
	{
		for (hash = 0; hash < size; hash++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
