#include "main.h"
/**
 * _islower -  checks for lowercase character.
 * Return: 1 if c is lowercase
 * Return: 0 if otherwise
 */
int _islower(int c)
{
	if (c > 96 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
