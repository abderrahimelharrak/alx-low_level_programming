#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: the string to print in reverse
 */

void print_rev(char *s)
{
	int x = _strlen(char *s);
	int i;

	for (i = 0; i < x; i++)
	{
		*(s + i) = *(s + j);
		j--;
		_putchar(i + '0');
	}
}
