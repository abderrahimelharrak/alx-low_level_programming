#include "search_algos.h"
#include <math.h>


/**
 * jump_search - searches for a value in an array of
 * integers using the Jump search algorithm
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: success
 */
int jump_search(int *array, size_t size, int value)
{
	int x, y, z, previous;

	if (array == NULL || size == 0)
		return (-1);

	y = (int)sqrt((double)size);
	z = 0;
	previous = x = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", x, array[x]);

		if (array[x] == value)
			return (x);
		z++;
		previous = x;
		x = z * y;
	} while (x < (int)size && array[x] < value);

	printf("Value found between indexes [%d] and [%d]\n", previous, x);

	for (; previous <= x && previous < (int)size; previous++)
	{
		printf("Value checked array[%d] = [%d]\n", previous, array[previous]);
		if (array[previous] == value)
			return (previous);
	}

	return (-1);
}
