#include "main.h"
/**
 * is_prime_helper - Another function
 * @divisor: int variable
 * @n: int variable
 * Return: Always 0
 */
int is_prime_helper(int n, int divisor)
{
	if (divisor == 1)
	{
		return (1);
	}

	if (n % divisor == 0)
	{
		return (0);
	}

	return (is_prime_helper(n, divisor - 1));
}

/**
 * is_prime_number -  returns 1 if the input integer is a prime number
 * @n: int variable
 * Return: ALways 0
 */

int is_prime_number(int n)

{
	if (n <= 1)
	{
		return (0);
	}

	return (is_prime_helper(n, n - 1));
}
