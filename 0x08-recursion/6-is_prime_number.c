#include "main.h"

int check(int, int);

/**
 * is_prime_number - is prime
 * @n: number
 * Return: true or false
 */

int is_prime_number(int n)
{
	return (check(n, 1));
}

/**
 * check - cheking prime
 * @n: number
 * @i: iteration
 * Return: n
 */

int check(int n, int i)
{
	if (n <= 1)
		return (0);

	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);

	return (check(n, i + 1));
}
