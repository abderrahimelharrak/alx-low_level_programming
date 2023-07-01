#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of integers
 * @a: the array to reverse
 * @n: the number of the elements in the array
 */

void reverse_array(int *a, int n)
{
	int x, tmp;

	for (x = 0; x < n ; x++)
	{
		n--;
		tmp = a[x];
		a[x] = a[n];
		a[n] = tmp;
	}
}
