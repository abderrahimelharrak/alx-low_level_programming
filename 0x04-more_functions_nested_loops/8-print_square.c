#include "main.h"

/**
 * print_square - a function that prints a square, followed by a new line
 * _putchar only
 * @size: the size of the square
 * Return: a squar
 */
void print_square(int size)
{
	int x;

	for (x = 0 ; x <= size ; x++)
	{
		_putchar("#");
	}
	_putchar('\n');
}
