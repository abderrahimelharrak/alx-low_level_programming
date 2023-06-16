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
	char t[26] = "abcdfghijklmnoprstuvwxyz";

	for (i = 0; i < 26; i++)
	putchar(t[i]);
	putchar('\n');
	return (0);
}
