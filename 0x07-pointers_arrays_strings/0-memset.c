#include "main.h"
/**
 * _memset - fills memory with a constant byte.
 * @s: a pointer variable
 * @b: a character variable
 * @n: an integer variable
 * Return: Always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	char* p = s;

	while (n > 0)
	{
	*p = b;
	p++;
	n--;
	}
	return s;
}
