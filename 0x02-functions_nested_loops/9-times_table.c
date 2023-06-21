#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 * Return: Always 0
 */
void times_table(void)
{
	int limit = 9;
	int i, j;

	for (i = 0; i <= limit; i++)
	{
		for (j = 0; j <= limit; j++)
		{
			_putchar(i);
			_putchar(42);
			_putchar(j);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
