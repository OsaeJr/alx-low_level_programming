#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers
 * @a: int pointer
 * @n: int pointer
 * Return: Always 0
 */
void print_array(int *a, int n)
{
	int i;

	if (a == 0 || n <= 0)
	{
	return;
	}

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != n - 1)
		{
			printf(", ");
		}
	}

	printf("\n");
}
