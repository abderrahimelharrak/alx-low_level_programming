#include "main.h"

/**
 * _pow_recursion - power recursion
 * @x: input
 * @y: input
 * Return: an int
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	
	if (x != 0 && y == 0)
		return (1);

	return (x * _pow_recursion(x,y - 1));

}
