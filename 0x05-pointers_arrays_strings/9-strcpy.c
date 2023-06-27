#include "main.h"

/**
 * _strcpy - function that copies the string pointed to by src
 * @dest: destination
 * @src: the souece
 * Return: the gard
 */

char *_strcpy(char *dest, char *src)
{
	char *guard = dest;

	while (*src)
	{
		*dest++ = *src++;
		*dest = 0;
	}
	return (guard);
}
