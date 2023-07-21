#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: number of parametres
 * Return: nothing
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int i, somme = 0;

	if (n == 0)
		return (0);

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		somme += va_arg(valist, const unsigned int);
	}

	va_end(valist);

	return (somme);
}
