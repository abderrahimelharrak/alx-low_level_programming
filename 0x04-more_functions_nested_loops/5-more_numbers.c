#include "main.h"

/**
 * more_numbers -  a function that prints 10 times the numbers, from 0 to 14, followed by a new line
 *
 * Return: 0-14 x10 , followed by a new line
 */
void more_numbers(void)
{
	int x;
	int i;

	i = 0;
	while (i < 10)
	{
		for (x = 0 ; x < 15 ; x++)
		{
			_putchar(x + '0');
		}
		_putchar('\n');
		i++;
	}
	_putchar('\n'à;
}
