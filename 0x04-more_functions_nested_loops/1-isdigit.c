#include "main.h"

/**
 * _isdigit - check for a digit
 * @c: the degit to check
 * Return: 1 for digit 0 for any else
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
