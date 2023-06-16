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
	char t[10] = "0123456789";
	for (i = 0; i <10 ; i++)
	putchar(t[i]);
	putchar('\n');
	return (0);
}
