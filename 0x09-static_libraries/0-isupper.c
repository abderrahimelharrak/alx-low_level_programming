#include "main.h"

/**
 * _isupper - letter in upper case
 * @c: the caracter we test on
 * Return: 1 or 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
