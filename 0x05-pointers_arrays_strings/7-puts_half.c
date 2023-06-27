#include "main.h"

/**
 * puts_half - function that prints half of a string
 * @str: the string to print
 */

void puts_half(char str)
{
	char c;
	int len, i;

	for (c = str; *c != '\0' ; c++)
	len = c - str;
	if (len % 2 != 0)
		_putchar(str[len - 1]);
	else
	{
		for (i = len / 2 ; i < len ; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
