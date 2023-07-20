#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - the main function
 * @argc: the number of args
 * @argv: arg vector
 * Return: 0
 */

int main(int argc, char **argv)
{
	char *t = (char *)main;
	int x;

	if (argc != 2)
	{
		printf(" no arguments .... error\n");
		exit(0);
	}
	x = atoi(argv[1]);
	if (x < 0)
	{
		printf("no arg vecteur ..... error \n");
		exit(0);
	}
	while (x--)
	{
		printf("%02hhx%s", *t++, x ? " " : "\n");
	}
	return (0);
}
