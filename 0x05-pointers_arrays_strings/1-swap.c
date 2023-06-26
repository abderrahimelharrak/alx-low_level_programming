#include"main.h"

/**
 * reset_to_98 - takes a pointer to an int and updates the value to 98
 * @n: the number to change
 */
void reset_to_98(int *n)
{
	int *p;

	p = &n;
	*p = 98;
}
