#include "main.h"

/**
 * _isdigit - check for a digit
 * @c: the degit to check
 * Return: 1 for digit 0 for any else
 */

int _isdigit(int c)
{
	if (c <= 0 && c > 9)
		return (1);
	return (0);
}
