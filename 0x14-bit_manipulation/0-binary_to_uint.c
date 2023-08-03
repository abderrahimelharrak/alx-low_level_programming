#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b:  pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0;
	int the_base = 1, y;

	if (b == NULL)
		return (0);

	for (y = 0; b[y + 1] != '\0' ; y++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	while (y >= 0)
	{
		x += ((b[y] - '0') * la_base);
		la_base *= 2;
		y--;
	}


	return (x);

}
