#include "main.h"
#include <stdio.h>

/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *un = haystack;
		char *deux = needle;

		while (*un == *deux && *deux != '\0')
		{
			un++;
			deux++;
		}

		if (*deux == '\0')
			return (haystack);
	}

	return (NULL);
}
