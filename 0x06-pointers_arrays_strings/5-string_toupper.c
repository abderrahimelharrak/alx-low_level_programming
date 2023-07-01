#include "main.h"

/**
 * string_toupper - a function that changes all lower of a string to upper
 * @c: the string to make in uppercase
 * Return: the string c
 */
char *string_toupper(char *c)
{
	int i;

	for (j = 0; c[j] != '\0'; j++)
	{
		if (c[j] >= 'a' && c[j] <= 'z')
			c[j] = c[j] - 32;
	}
	return (c);
}
