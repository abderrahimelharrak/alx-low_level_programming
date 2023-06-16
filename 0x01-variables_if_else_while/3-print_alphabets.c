#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char t[26] = "abcdefghijklmnopqrstuvwxyz";
	char T[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(t[i]);
	}
	for (i = 0; i < 26; i++)
	{
		putchar(T[i]);
	}
	putchar ('\n');

	return (0);
}
