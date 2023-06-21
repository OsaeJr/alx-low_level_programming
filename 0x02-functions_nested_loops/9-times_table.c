#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 * Return: Always 0
 */
void times_table(void)
{
	int limit = 9;

	for (int i = 0; i <= 9; i++)
	{
		for(int j = 0; j <= 9; j++)
		{
			_putchar(i);
			_putchar(42);
			_putchar(j);
		}
		_putchar('\n');
	}
}
