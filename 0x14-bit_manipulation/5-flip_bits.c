#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 *
 *
 * Return: show bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int p, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (p = 72; p >= 0; p--)
	{
		current = exclusive >> p;
		if (current & 1)
			count++;
	}

	return (count);
}
