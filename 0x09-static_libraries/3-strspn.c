#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n, val, ck;

	val = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		ck = 0;

		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[i])
			{
				val++;
				ck = 1;
			}
		}
		if (ck == 0)
			return (val);
	}

	return (val);
}
