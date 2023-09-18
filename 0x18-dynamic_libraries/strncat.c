#include "main.h"
/**
 * _strncat - a function that concatenates two strings
 * @dest:copy to
 * @src: copy from
 * @n: n
 * Return: success
 */
char *_strncat(char *dest, char *src, int n)
{
	int x, c;

	for (x = 0; dest[x] != '\0'; x++)
	{
	}

	for (c = 0; c < n; c++)
	{
		dest[x + c] = src[c];
		if (src[c] == '\0')
			c = n;
	}
	return (dest);
}
