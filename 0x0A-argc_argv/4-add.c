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
	int errorflag = 0;

	if (argc < 2)
	{
		printf("%d\n", zero);
	}

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (!(argv[i][0] >= '0' && argv[i][0] <= '9'))
			{
				errorflag = 1;
			}
			else
			{
				sum += atoi(argv[i]);
			}
		}
		if (errorflag)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			printf("%d\n", sum);
		}
	}
	return (0);
}
