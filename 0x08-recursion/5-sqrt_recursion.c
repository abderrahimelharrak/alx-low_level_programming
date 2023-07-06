#include "main.h"

int _sqrt(int, int);

/**
 * _sqrt_recursion - sqrt
 * @n: number
 * Return: sqrt of number n
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - sqrt
 * @n: input
 * @i: input
 * Return: sqrt
 */

int _sqrt(int n, int i)
{
	int s = i * i;

	if (s > n)
		return (-1);

	if (s == n)
		return (i);

	return (_sqrt(n, i + 1));

}
