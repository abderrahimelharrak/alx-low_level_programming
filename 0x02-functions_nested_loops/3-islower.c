#include "main.h"
/**
 * int _islower - test if a character is lowercase or not
 * @c: the character to be checked
 * return: 1 for lowercase 0 if not
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z' ? 1 : 0);
}
