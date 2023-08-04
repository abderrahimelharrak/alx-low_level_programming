#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index.
 * @n: number
 * @index: index
 * Return: success
 */

int set_bit(unsigned long int *n, unsigned int index)
{

	if (index > 63)
		return (-1);

	*n = *n | 1ul << index;

	return (1);
}
