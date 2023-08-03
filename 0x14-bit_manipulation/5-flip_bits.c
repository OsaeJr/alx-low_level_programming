#include "main.h"
#include <stddef.h>
/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: bits to flip
 * @m: bits to get from one number to another
 *
 * Return: number of bits needed to flipped to get from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int count = 0;

	while (diff != 0)
	{
		count += diff & 1;
		diff >>= 1;
	}

	return (count);
}
