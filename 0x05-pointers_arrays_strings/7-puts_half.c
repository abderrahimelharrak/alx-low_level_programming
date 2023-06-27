#include "main.h"

/**
 * puts_half - function that prints half of a string
 * @str: the string to print
 */

void puts_half(char *str)
{

	int n = 0;
	int z;

	while (str[n] != '\n')
	{
		n++;
	}
	if (n % 2 == 1)
	{
		z = (n - 1) / 2;
		z = z + 1;
	}
	else
	{
		z = n / 2;
	}
	for ( ; z < n; z++)
	{
		_putchar(str[z]);
	}
	_putchar('\n');
}
