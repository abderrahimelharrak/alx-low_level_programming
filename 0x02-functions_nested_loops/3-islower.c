#include "main.h"
/**
 * Prototype: int _islower(int c);
 * Returns 1 if c is lowercase
 * Returns 0 otherwise
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z' ? 1 : 0);
}
