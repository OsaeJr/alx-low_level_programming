#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14,
 * Return: Always 0
 */
void more_numbers(void)
{
	int i;
	int j;
	int quotient;
	int remainder;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			quotient = j / 10;
			remainder = j % 10;

			if (quotient !=0)
			{
				_putchar(quotient + '0');
			}
			_putchar(remainder + '0');

		}
		_putchar('\n');
	}

}
