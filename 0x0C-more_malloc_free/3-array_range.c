#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - a function that creates an array of integers
 * @min: min input
 * @max: max input
 * Return: pointer to an arrey of int
 */
int *array_range(int min, int max)
{
	int *T;
	int i, length;

	if (min > max)
		return (NULL);

	for (length = 0; length < (max - min); length++)
		;

	T = malloc(sizeof(int) * (length + 1));
	if (T == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
	{
		T[i] = min++;
	}

	return (T);
}
