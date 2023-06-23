#include<stdio.h>

/**
 * main - print the numbers
 * Return: 0 seccess
 */

int main(void)
{
	int n;

	for (n = 0 ; n <= 100 ; n++)
	{
		if (n % 3 != 0 && n % 5 != 0)
		{
			printf("%d", n);
			printf(" ");
		}
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf("FizzBuzz");
			printf(" ");
			continue;
		}
		if (n % 3 == 0)
		{
			printf("Fizz");
			printf(" ");
		}
		if (n % 5 == 0)
		{
			printf("Buzz");
			printf(" ");
		}
		return (0);
	}
}
