#include "main.h"

/**
 * _memset - fill a block of memory
 * @s: starting adress
 * @b: the value that we want
 * @n: number of bites
 * Return: change the array with number of bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int j = 0;

	for (; n > 0 ; j++)
	{
		s[j] = b;
		n--;
	}
	return (s);
}
