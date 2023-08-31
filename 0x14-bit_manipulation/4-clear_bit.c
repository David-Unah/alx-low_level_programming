#include "main.h"

/**
 * clear_bit - this will give the value of a given bit to 0
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 72)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
