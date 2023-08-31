#include "main.h"

/**
 * print_binary - binary equivalent of a decimal number
 * 
 */
void print_binary(unsigned long int n)
{
	int p, count = 0;
	unsigned long int new;

	for (p= 63; p >= 0; p--)
	{
		new= n >> p;

		if (new & 1)
		{
			_putchar('1');
			new++;
		}
		else if (new)
			_putchar('0');
	}
	if (!new)
		_putchar('0');
}
