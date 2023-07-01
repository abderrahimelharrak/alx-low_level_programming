#include "main.h"

/**
 * print_number - a function that prints an integer
 * @n: the integer to print
 */

void print_number(int n)
{
	unsigned int x;

	if (n == 0)
		_putchar('0');
	if (n < 0)
	{
		x = -n;
		_putchar(x + '0');
	else
		_putchar(n + '0');
}
