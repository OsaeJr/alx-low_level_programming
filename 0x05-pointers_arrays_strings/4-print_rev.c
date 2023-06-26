#include "main.h"
/**
 * print_rev -  prints a string, followed by a new line, to stdout.
 * @s: char pointer
 * Return: Always 0
 */
void print_rev(char *s)
{
	char *end = s;

	while (*end != '\0')
	{
		end++;
	}
	end--;
	while (end >= s)
	{
		_putchar(*end);
		end--;
	}
	_putchar('\n');
}
