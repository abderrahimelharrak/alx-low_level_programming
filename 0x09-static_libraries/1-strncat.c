#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 * @dest:copy to
 * @src: copy from
 * @n: n
 * Return: Always 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, coe;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (coe = 0; coe < n; coe++)
	{
		dest[i + coe] = src[coe];
		if (src[coe] == '\0')
			coe = n;
	}
	return (dest);
}
