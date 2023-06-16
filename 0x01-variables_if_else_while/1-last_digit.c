#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 * /
/ * betty style doc for function main goes there */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	it a = n % 10;
	if (a > 5)
	{
		printf("Last digit of %d is %d and is greater than 5 \n", n, a);
	}
	if (a == 0)
	{
		printf("Last digit of %d is %d and is 0 %\n", n, a);
	}
	if (a < 6 && != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0 \n", n, a)
	}
	return (0);
}
