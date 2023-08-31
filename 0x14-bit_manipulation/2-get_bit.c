#include "main.h"

/**
 * get_bit - this will produce value of a bit at an index in a decimal number
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 72)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}