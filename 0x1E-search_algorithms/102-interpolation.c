#include "search_algos.h"


/**
 * interpolation_search - searches for a value in an array of integers
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: success
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t x, y, z;
	double d;

	if (array == NULL)
		return (-1);

	y = 0;
	z = size - 1;

	while (size)
	{
		d = (double)(z - y) / (array[z] - array[y]) * (value - array[y]);
		x = (size_t)(y + d);
		printf("Value checked array[%d]", (int)x);

		if (x >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[x]);
		}

		if (array[x] == value)
			return ((int)x);

		if (array[x] < value)
			y = x + 1;
		else
			z = x - 1;

		if (y == z)
			break;
	}

	return (-1);
}
