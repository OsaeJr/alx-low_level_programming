#include "main.h"
/**
 * _isalpha - checks for alphabetic character.
 * @c: Represents number in ASCII code
 * Return: 1 if c is a letter, lowercase or uppercase, otherwise 0
 */
int _isalpha(int c)
{
	if (c > 64 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
