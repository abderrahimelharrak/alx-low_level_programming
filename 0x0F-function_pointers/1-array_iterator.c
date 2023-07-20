#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - a function that executes a function given
 * @array: the array
 * @size: is the size of the array
 * @action: is a pointer to the function you need to use
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL)
		return;
	if (action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
