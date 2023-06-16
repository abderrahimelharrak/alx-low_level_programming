#include<stdio.h>
#include <stdlib.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;

	for (x = 48; x < 57; x++)
	{
		putchar(x);
		putchar(',');
		putchar(' ');
	}
	putchar('9');
	putchar('\n');
	return (0);
}
