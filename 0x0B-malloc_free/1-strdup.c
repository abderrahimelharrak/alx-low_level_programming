#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: the string to work in
 * Return: a pointer
 */

char *_strdup(char *str)
{
	int n = 0;
	char *T, *P;

	if (!str)
		return (NULL);
	T = str;
	while (*T++)
		n++;
	P = malloc(n + 1);
	if (!P)
		return (NULL);
	T = P;
	while (*str)
		*T++ = *str++;
	*T = 0;
	return (P);
}
