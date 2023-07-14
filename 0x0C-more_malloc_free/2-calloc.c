#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _calloc - a function that allocates memory for an array, using malloc
 * @nmemb: array number
 * @size: size of  array
 * Return: nothing
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *T;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	T = malloc(nmemb * size);
	if (T == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		T[i] = 0;

	return (T);
}
