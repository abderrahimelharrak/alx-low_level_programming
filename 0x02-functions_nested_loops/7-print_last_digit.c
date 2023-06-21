#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @x: the number to prints the last digit of 
 * Return: for the last digit
 */
int print_last_digit(int x)
{
	int y;

	if (x > 10)
	{
		y = x / 10;
		return (x - y);
	}
	return (x);
}
