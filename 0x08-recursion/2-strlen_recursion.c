#include "main.h"

/**
 * _strlen_recursion - string len recur
 * @s: string
 * Retrun: len of the s
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return 0;

	s++;
	return (1 + _strlen_recursion(s));

}
