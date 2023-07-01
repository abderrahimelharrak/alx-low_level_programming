#include "main.h"

/**
 * print_number - a function that prints an integer
 * @n: the integer to print
 */

void print_number(int n)
{
	unsigned int x;

	x = n;
	if (n < 0)
	{
		_putchar('-');
		x = -n;
	}
	if (x / 10 != 0)
	{
		printf_number(n / 10);
	}
	_putchar((n % 10) + '0');
}
