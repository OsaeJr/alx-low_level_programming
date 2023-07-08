#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main -  multiplies two numbers.
 * @argc: arg count
 * @argv: arg vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;
	int zero = 0;

	if (argc < 2)
	{
		printf("%d", zero);
	}

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (!(argv[i][0] >= '0' && argv[i][0] <= '9'))
			{
				printf("Error");
				break;
			}
			sum += atoi(argv[i]);
		}

		{
			 printf("%d\n", sum);
		}
	}
	return (0);
}
