#include "main.h"
/**
 * _isalpha - check the caracter is alphabetic
 * @c : the caracter to check
 * Return : 1 if the caracter is alphabetic 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
			return (1);
	return (0);
}
