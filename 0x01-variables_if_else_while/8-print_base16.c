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
	int i;
	char x[16] = "0123456789abcdef";

	for (i = 0; i < 16; i++)
	putchar(x[i]);
	putchar('\n');
	return (0);
}
