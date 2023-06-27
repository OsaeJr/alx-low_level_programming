#include "main.h"
/**
 * _strcpy - copies the string pointed to by src
 * @dest: char pointer
 * @src: char pointer
 * Return: Always 0
 */
char *_strcpy(char *dest, char *src)
{
	char *original_dest;

	if (dest == 0 || src == 0)
	{
	return (0);
	}

	original_dest = dest;

	while (*src != '\0')
	{
	*dest = *src;
	dest++;
	src++;
	}

	*dest = '\0';
	return (original_dest);
}
