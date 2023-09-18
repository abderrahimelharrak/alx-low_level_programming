#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: char input
 * Return: length of the input string
 */
int _strlen(char *s)
{
	int i = 1, somme = 0;
	char tr = s[0];

	while (tr != '\0')
	{
		somme++;
		tr = s[i++];
	}
	return (somme);
}
