#include "main.h"

/**
 * more_numbers -  a function that prints 10 times the numbers
 * _putchar only 3 times
 * Return: 0-14 x10 , followed by a new line
 */
void more_numbers(void)
{
	int x;
	int i;

	i = 0;
	do {
		for (x = 0 ; x < 15 ; x++)
		{
			if (x >= 10)
			_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
		}
		i++;
	} while (i < 10);
	_putchar('\n');
}
