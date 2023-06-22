#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14,
 * Return: Always 0
 */
void more_numbers(void)
{
	int i;
	int number;

	for (number = 0; number <= 10; number++)
	{
		for (i = 0; i < 15; i++)
		{
			_putchar(i + '0');
		}
		_putchar('\n');
	}

}
