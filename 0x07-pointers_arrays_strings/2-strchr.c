#include "main.h"
/**
 * _strchr - locates a character in a string.
 * @s: character pointer
 * @c: character variable
 * Return: Always 0
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
	if (*s == c)
	{
	return (s);
	}
	s++;
	}
	return ("NULL");
}
