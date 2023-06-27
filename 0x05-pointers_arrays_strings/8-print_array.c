#include"main.h"

/**
 * print_array - function that prints n elements of an array of integers
 * @a: array of integers
 * @n: size of the array
 */

print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		printf("%d, ", a[i]);
	}
	_putchar('\n');
}
