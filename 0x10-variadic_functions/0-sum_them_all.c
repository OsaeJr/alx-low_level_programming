#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of var arguements
 * Return: If n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int total = 0;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, int);

		total += x;
	}
	return (total);

	va_end(args);
}
