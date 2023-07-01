#include "holberton.h"
#include <stdio.h>
/**
 * rot13 - encode using rot13
 * @s: variable
 * Return: Always 0 (Success)
 */
char *rot13(char *s)
{
	int i = 0, j = 0;
	char t1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char t2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + i) != 0)
	{
		for (j = 0; j <= 52; j++)
		{
			if (*(s + i) == t1[j])
			{
				*(s + i) = t2[j];
				break;
			}
		}
				i++;
	}
		return (s);
}
