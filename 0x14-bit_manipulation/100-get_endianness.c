#include "main.h"
#include <stdio.h>

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *byte_ptr = (char *)&num;

	/* If the first byte of the number is 1, it's little endian. */
	return (*byte_ptr == 1);
}
