#include "main.h"
/**
 * _isalpha - check the caracter is alphabetic
 * @c : the caracter to check
 * Return : 1 for alohabetic  0 for not
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
