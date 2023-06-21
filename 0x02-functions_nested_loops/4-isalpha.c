#include "main.h"
/**
 * _isalpha - check the caracter is alphabetic
 * @c : the caracter to check
 * Return: 1 for alphabetic caracter 0 for anything else
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
