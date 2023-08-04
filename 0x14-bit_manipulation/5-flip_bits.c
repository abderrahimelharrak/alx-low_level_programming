#include "main.h"

/**
 * flip_bits - function returns the number of bits needed to flipfrom numtonum
 * @n: number
 * @m: bits
 * Return: success
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int x = 0;

	for (; n != 0 || m != 0;)
	{
		if ((n & 1) != (m & 1))
			x++;
		m = m >> 1;
		n = n >> 1;
	}

	return (x);

}
