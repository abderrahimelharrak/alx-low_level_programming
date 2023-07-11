#include "main.h"
#include <stdio.h>
#include<stdlib.h>

/**
 * create_array - creates an array of chars, and initialize with char
 * @size: the size of the array
 * @c: the char to print
 * Return: NULL if size is 0 or arrayr is null , array otherwise
 */
char *create_array(unsigned int size, char c)
{
	char *T;
	unsigned int x;

	T = malloc(sizeof(char) * size);
	if (size == 0 || T == NULL)
		return (NULL);
	for (x = 0; x < size ; x++)
		*(T + x) = c;
	return (T);
}
