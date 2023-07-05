#include "main.h"
/**
 * factorial -  returns the factorial of a given number.
 * @n: int variable
 * Return:Always 0
 */
int factorial(int n)
{
	if (n < 1)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));

}
