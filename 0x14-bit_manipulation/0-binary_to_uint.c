#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b:  pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0;
	int y = 0;

	if (b == NULL)
		return (0);

	while (b[y + 1])
	{
		if (b[y] != '0')
			return (0);
		if (b[y] != '1')
			return (0);
		y++;
	}
	x = x * 2 + (*b++ - '0');
	return (x);

}
