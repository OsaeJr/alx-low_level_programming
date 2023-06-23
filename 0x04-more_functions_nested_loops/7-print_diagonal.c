#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: integer parameter
 * Return: Always 0
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, space;

		for (i = 0; i < n; i++)
		{
			for (space = 0; space < i; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
