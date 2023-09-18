#include <stdio.h>

/**
 * addition - add two numbers
 * @a: number one
 * @b: number two
 * Return: success
 */
int addition(int a, int b)
{
	return (a + b);
}
/**
 * subt - subt two numbers
 * @a: number one
 * @b: number two
 * Return: success
 */
int subt(int a, int b)
{
	return (a - b);
}
/**
 * division - devide two numbers
 * @a: number one
 * @b: number two
 * Return: success
 */
int division(int a, int b)
{
	if (b == 0)
	{
		printf("you cant devide by 0\n");
		return (0);
	}
	else
		return (a / b);
}
/**
 * multp - multiply two numbers
 * @a: number one
 * @b: number two
 * Return: success
 */
int multp(int a, int b)
{
	return (a * b);
}
/**
 * modul - module of  two numbers
 * @a: number one
 * @b: number two
 * Return: success
 */
int modul(int a, int b)
{
	if (b == 0)
	{
		printf("you cant devide by 0\n");
		return (0);
	}
	else
		return (a % b);
}
