#include "main.h"

/**
 * print_alphabet_x10 - print all alphabet x10 in lowercase
 */

void print_alphabet_x10(void)
{
	int i;
	char T[26] = "abcdefghijklmnopqrstuvwxyz";
	int j = 0;

	while (j < 10)
	{
		for (i = 0 ; i < 26 ; i++)
			_putchar(T[i]);
		_putchar('\n');
		j++;
	}
}
