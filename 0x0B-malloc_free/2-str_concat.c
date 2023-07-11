#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat -  a function that concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: a pointer
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int n = 0, m = 0;
	char *T, *P;

	T = s1;
	if (s1)
		while (*T++)
			n++;
	else
		s1 = "";

	T = s2;
	if (s2)
		while (*T++)
			m++;
	else
		s2 = "";

	P = malloc(n + m + 1);
	if (!P)
		return (NULL);

	T = P;
	while (*s1)
		*T++ = *s1++;
	while (*s2)
		*T++ = *s2++;
	*T = 0;

	return (P);
}
