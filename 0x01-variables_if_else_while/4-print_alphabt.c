#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
        int i;
        char T[26] = "abcdefghijklmnopqrstuvwxyz";

        for (i = 0; i < 26 ; i++)
        {
                putchar(T[i]);
		putchar('\n');
	}
        return (0);
}  
