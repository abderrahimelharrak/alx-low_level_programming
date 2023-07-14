#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - concatenates 2 strings into a new string,
 * @s1: first string
 * @s2: second string
 * @n: number of characters to take from second string
 * Return: new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1, l2, i;
	char *p, *t;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	for (l1 = 0, p = s1; *p; p++)
		l1++;
	for (l2 = 0, p = s2; *p; p++)
		l2++;
	if (n > l2)
		n = l2;

	t = malloc((l1 + n + 1) * sizeof(char));
	if (!t)
		return (0);

	p = t;
	while (*s1)
		*p++ = *s1++;
	i = 0;
	while (i < n)
	{
		*p++ = s2[i++];
	}
	*p = 0;

	return (t);
}
