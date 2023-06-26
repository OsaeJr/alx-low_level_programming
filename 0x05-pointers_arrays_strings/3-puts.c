#include "main.h"
/**
 * _puts -  prints a string, followed by a new line, to stdout.
 * @str: char pointer
 * Return: Always 0
 */
void _puts(char *str)
{
	int len;

	for (len = 0; *str != 0; len++)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
