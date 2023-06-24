#include "main.h"
/**
 * print_number - prints an integer.
 * n@: integer parameter
 * Return: Always 0
 */
void print_number(int n)
{
	if (n >= 0 && n <= 9)
	{
		_putchar(n + '0');
	}
	if (n > 9 && n < 100) 
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	if (n > 99 && n < 1000)
	{
		_putchar(((n / 100) % 10) + '0');
		_putchar(((n / 10) % 10) + '0');
		_putchar((n % 10) + '0');        
	}
	if (n > 999 && n < 10000)
	{
		_putchar(((n / 1000) % 10) + '0');
		_putchar(((n / 100) % 10) + '0');
		_putchar(((n / 10) % 10) + '0');
		_putchar((n % 10) + '0');
	}
	if (n < 0 && n >= - 9)
	{
		_putchar('-');
		n = -n;
		_putchar(n + '0');
	}
	if (n < - 9 && n > - 100)
	{
		_putchar('-');
		n = -n;
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}     
}
