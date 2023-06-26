#include "main.h"

/**
 * swap_int -  swaps the values of two integers
 * @a: the fist integer
 * @b: the seconf integer
 */

void swap_int(int *a, int *b)
{
	int *p;

	p = a;
	*p = *a;
	*a = *b;
	*b = *p;
}
