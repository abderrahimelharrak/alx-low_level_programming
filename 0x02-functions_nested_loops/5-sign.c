#include "main.h"
/**
 * print_sign - check the sign of a number
 * @n: the number to check
 * Return: 1 for greater than zero 0 for zero -1 for less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}
