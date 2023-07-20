#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - sum of a and b
 * @a: int var
 * @b : int var
 * Return: returns the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - difference of a and b
 * @a: int var
 * @b : int var
 * Return: returns the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - product of a and b
 * @a: int var
 * @b : int var
 * Return: returns the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of a and b
 * @a: int var
 * @b : int var
 * Return: returns the result of division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - remainder of division of a and b
 * @a: int var
 * @b : int var
 * Return: returns the remainder of division of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
