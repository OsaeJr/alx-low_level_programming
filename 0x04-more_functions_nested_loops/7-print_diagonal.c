#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: integer parameter
 * Return: Always 0
 */
void print_diagonal(int n)
{
	int i, space;
	for (i = 1; i <= n; i++)
	{
		for (space = 0; space < i; space++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
