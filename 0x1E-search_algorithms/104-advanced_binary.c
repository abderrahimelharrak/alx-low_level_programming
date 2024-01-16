#include "search_algos.h"


/**
 * rec_search - searches for a value in an array of integers
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: success
 */
int rec_search(int *array, size_t size, int value)
{
	size_t x = size / 2;
	size_t y;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (y = 0; y < size; y++)
		printf("%s %d", (y == 0) ? ":" : ",", array[y]);

	printf("\n");

	if (x && size % 2 == 0)
		x--;

	if (value == array[x])
	{
		if (x > 0)
			return (rec_search(array, x + 1, value));
		return ((int)x);
	}

	if (value < array[x])
		return (rec_search(array, x + 1, value));

	x++;
	return (rec_search(array + x, size - x, value) + x);
}

/**
 * advanced_binary - calls to rec_search to return the index of the num
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: success
 */
int advanced_binary(int *array, size_t size, int value)
{
	int i;

	i = rec_search(array, size, value);

	if (i >= 0 && array[i] != value)
		return (-1);

	return (i);
}
