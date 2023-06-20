#include "main.h"
/* more headers goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int i;
	char T[26] = "abcdefghijklmnopqrstuvwxyz";
	for (i =0 ; i < 26 ; i++)
	_putchar(T[i]);
	_putchar('\n');
	return (0);
}
	
