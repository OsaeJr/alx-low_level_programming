#include <stdlib.h>
#include "main.h"
/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: int var
 * @size: size of array
 * Return: If nmemb or size is 0,returns NULL If malloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int totalSize;
	void *ptr;
	unsigned int i;
	unsigned char *bytePtr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	totalSize = nmemb * size;

	ptr = malloc(totalSize);

	if (ptr == NULL)
	{
	return (NULL);
	}

	bytePtr = (unsigned char *)ptr;
	for (i = 0; i < totalSize; i++)
		bytePtr[i] = 0;

	return (ptr);
}
