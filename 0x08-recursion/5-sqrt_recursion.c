#include "main.h"
/**
 * sqrt_helper - find the natural square root of a number
 * @n: The number for which the square root is to be found
 * @start: The starting value for the search range
 * @end: The ending value for the search range
 *
 * Return: The natural square root of n if found, -1 otherwise
 */
int sqrt_helper(int n, int start, int end)
{
	int mid;

	if (start > end)
	{
	return (-1);
	}

	mid = (start + end) / 2;

	if (mid * mid == n)
	{
		return (mid);
	}
	else if (mid * mid < n)
	{
		return (sqrt_helper(n, mid + 1, end));
	}
	else
	{
		return (sqrt_helper(n, start, mid - 1));
	}
}

/**
 * _sqrt_recursion - natural square root of a number using recursion
 * @n: The number for which the square root is to be found
 *
 * Return: The natural square root of n if found, -1 if n is negative
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (sqrt_helper(n, 0, n));
}
