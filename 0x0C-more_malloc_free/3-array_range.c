#include <stdlib.h>
#include "main.h"
/**
 * array_range -  creates an array of integers.
 * @min: int var
 * @max: size of array
 * Return: If min > max return NULL and when malloc fails
 */
int *array_range(int min, int max)
{
	int size;
	int *array;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;

	array = (int *)malloc(size * sizeof(int));
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = min++;
	}

	return (array);
}
