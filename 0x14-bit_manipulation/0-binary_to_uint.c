#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 *
 * Return: this will return the number
 */
unsigned int binary_to_uint(const char *b)
{
	int p;
	unsigned int check = 0;

	if (!b)
		return (0);

	for (p = 0; b[p]; p++)
	{
		if (b[p] < '0' || b[p] > '1')
			return (0);
		check = 2 * check + (b[p] - '0');
	}

	return (check);
}
