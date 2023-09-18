#include "main.h"
/**
 * _isdigit -  a function that checks for a digit 0-9
 * @c: input
 * Return: success
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
