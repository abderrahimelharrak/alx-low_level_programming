#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string
 * @str: the string to capitilizes
 * Return: the string capitalized
 */

char *cap_string(char *str)
{
	int i, y;
	int cp = 32;
	int separator[] = {',', ';', '.', '?', '"',
			    '(', ')', '{', '}', ' ', '\n', '\t'};

	for (i = 0; stp[i] != '\0'; i++)
	{
		if (stp[i] >= 'a' && stp[i] <= 'z')
		{
			stp[i] = stp[i] - cp;
		}

		cp = 0;

		for (y = 0; y <= 12; y++)
		{
			if (str[i] == separator[x])
			{
				y = 12;
				cp = 32;
			}
		}
	}
	return (str);
}
