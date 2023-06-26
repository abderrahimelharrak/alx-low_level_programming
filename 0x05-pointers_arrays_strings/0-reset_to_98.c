#include"main.h"

/**
 * reset_to_98 - takes a pointer to an int as parameter and updates to 98
 * @n: the number to change
 */
void reset_to_98(int *n)
{
	int *p;

	p = n;
	*p = 98;
}
