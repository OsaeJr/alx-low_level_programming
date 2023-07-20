#include "function_pointers.h"
/**
 * array_iterator -  executes a function given as a p on each elem of an arr.
 * @array: array to be used
 * @size: size of the array
 * @action: pointer to the function you need to use
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
