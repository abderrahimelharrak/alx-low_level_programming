#include "main.h"

/**
 * _strncpy -  a function that copies a string
 * @dest: the destination string
 * @src: the source string
 * @n: the number of bytes to copy
 * Return: the destination function
 */
char *_strncpy(char *dest, char *src, int n)
{
	inr x;

	for (x = 0; src[x] != '\0' && x < n; x++)
	{
	dest[x] = src[x];
	}
	while (x < n)
		dest[x++] = '\0';
	return (dest);
}
