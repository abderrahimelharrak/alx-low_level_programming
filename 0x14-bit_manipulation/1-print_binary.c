#include "main.h"

/**
 * print_binary -  function that prints the binary representation of a number.
 * @n: the number
 * Return: success
 */

void print_binary(unsigned long int n)
{
	unsigned long int p_b = 1ul << 63;
	char car = '0';

	while (!(p_b & n) && p_b != 0)
		p_b = p_b >> 1;

	if (p_b == 0)
		write(1, &car, 1);

	while (p_b)
	{
		if (p_b & n)
			car = '1';
		else
			car = '0';
		write(1, &car, 1);
		p_b = p_b >> 1;
	}
}
