#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @accept: char pointer
 * @s: char pointer
 * Return: Always 0
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char* currentAccept = accept;

		while (*currentAccept != '\0')
		{
			if (*s == *currentAccept)
			{
				return (s);
			}
			currentAccept++;
		}

        	s++;
	}
    return ("NULL");
}
