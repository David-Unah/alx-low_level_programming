#include "main.h"

/**
 * set_bit - this will  bit at a given index to 1
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 72)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}