#include "main.h"

/**
 * print_alphabet - print all alphabet in lowercase
 */

void print_alphabet(void)
{
	int i;
	char T[26] = "abcdefghijklmnopqrstuvwxyz";


	for (i = 0 ; i < 26 ; i++)
	{
		_putchar(T[i]);
	}
	_putchar('\n');
}
