#include "main.h"
/**
 * print_number - prints an integer.
 * @n: integer parameter
 * Return: Always 0
 */
void print_number(int n)
{
	unsigned int a = n;
	if (n < 0)
	{
		_putchar('-');
		n = -n;
		a = n;
	}
	a /= 10;
	if (a != 0)
		print_number(n / 10);
	_putchar(((unsigned) n % 10) + '0');
}
