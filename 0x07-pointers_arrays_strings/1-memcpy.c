#include "main.h"
/**
 * _memcpy - copies memory area.
 * @dest: pointer variable
 * @src: pointer variable
 * @n: integer variable
 * Return: Always 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *pDest = dest;
	char *pSrc = src;

	while (n > 0)
	{
	*pDest = *pSrc;
	pDest++;
	pSrc++;
	n--;
	}

	return (dest);
}
