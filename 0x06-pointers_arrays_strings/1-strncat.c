#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * @dest: the string to copy to
 * @src: the string to copy from
 * @n: the number of bytes to copy
 * Return: two concat strings
 */
char *_strcat(char *dest, char *src)
{

	int i, y;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (y = 0; src[y]  != '\0' && y < n ; n++, i++)
	{
		dest[i] = src[n];
	}
	dest[i] = '\0';
	return (dest);
}
