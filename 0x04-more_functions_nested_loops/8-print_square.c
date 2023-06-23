#include "main.h"

/**
 * print_square - a function that prints a square, followed by a new line
 * _putchar only
 * @size: the size of the square
 * Return: a squar
 */
void print_square(int size)
{
	int j, i;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			_putchar('#');
			for (j = 2; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
