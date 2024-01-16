#include "search_algos.h"



/**
 * recursive_search - searches for a value in an array of integers
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: success
 */
int recursive_search(int *array, size_t size, int value)
{
	size_t nos = size / 2;
	size_t x;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (x = 0; x < size; x++)
		printf("%s %d", (x == 0) ? ":" : ",", array[x]);

	printf("\n");

	if (nos && size % 2 == 0)
		nos--;

	if (value == array[nos])
		return ((int)nos);

	if (value < array[nos])
		return (recursive_search(array, nos, value));

	nos++;

	return (recursive_search(array + nos, size - nos, value) + nos);
}

/**
 * binary_search - calls to binary_search to return the index of the number
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: success
 */
int binary_search(int *array, size_t size, int value)
{
	int x;

	x = recursive_search(array, size, value);

	if (x >= 0 && array[x] != value)
		return (-1);

	return (x);
}
