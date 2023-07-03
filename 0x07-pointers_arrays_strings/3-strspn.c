#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: char pointer
 * @accept: char pointer
 * Return: Always 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int isAccepted;
	int i;

	while (*s != '\0')
	{
	isAccepted = 0;

	for (i = 0; accept[i] != '\0'; i++)
	{
	if (*s == accept[i])
	{
		isAccepted = 1;
		break;
	}
}

	if (!isAccepted)
	{
		break;
	}

	length++;
	s++;
	}

	return (length);
}
