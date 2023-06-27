#include "main.h"

/**
 * puts_half - function that prints half of a string
 * @str: the string to print
 */

void puts_half(char *str)
{
	int i;
	int x,m;

	while (*(str + m) != '\0')
	{
		i++;
	}
	x = (i / 2);
	for ( ; *(str + x) != '\0' ; x++)
	{
		_putchar(*(str + x));
	}
}
