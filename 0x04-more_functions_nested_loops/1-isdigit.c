#include "main.h"

/**
 * _isdigit - check for a digit
 * @c: the degit to check
 * Return: 1 gor digit 0 for any else
 */

int _isdigit(int c)
{
	if (c > 9 && c <= 0)
		return (1);
	return (0);
}
