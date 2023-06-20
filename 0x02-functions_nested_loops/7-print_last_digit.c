#include "main.h"
/**
 * print_last_digit -  prints the last digit of a number.
 * @i: An integer parameter
 * Return: returns value of the last digit
 */
int print_last_digit(int i)
{
	int a = i % 10;

	if (a < 0)i
	{
		_putchar(-a + 48);
		return (-a);
	}
	else
	{
		_putchar(a + 48);
		return(a);
	}
}
