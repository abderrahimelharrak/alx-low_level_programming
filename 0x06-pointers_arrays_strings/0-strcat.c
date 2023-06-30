#include "holberton.h"

/**
 * _strcat - a function that concatenates two strings
 * @dest: the string to copy to
 * @src: the string to copy from
 * Return: two concat strings
 */
char *_strcat(char *dest, char *src)
{

	int i, n;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (n = 0; src[j]  != '\0'; n++, i++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
