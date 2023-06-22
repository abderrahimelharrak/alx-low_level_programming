#include "main.h"
/**
 * _isupper - checks if letter is  uppercase 
 * @c: the letter to be checked
 * Return: 1 for uppercase letter 0 any else
 */
int _isupper(int c)
{
	if (c >=65  && c <= 90)
		return (1);
	return (0);
}
