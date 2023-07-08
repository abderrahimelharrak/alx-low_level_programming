#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry Point
 * atoi is a function that converts a string into an int
 * @argc: arguments
 * @argv: array pointing to arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, r = 1;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			r *= atoi(argv[i]);
		}
		printf("%d\n", r);
	}
	return (0);
}
