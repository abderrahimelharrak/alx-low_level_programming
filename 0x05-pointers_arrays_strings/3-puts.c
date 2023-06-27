#include "main.h"
#include<stdio.h>

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: the string to print
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		printf("%c", *str);
		str++;
	}
	printf("\n");
}
