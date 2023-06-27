#include "main.h"

/**
 * rev_string -  a function that reverses a string
 * @s: the string to reverse
 */

void rev_string(char *s)
{
	char swch = *(s + 0);
		int y = 0;
		int z;

		while (*(s + y) != '\0')
			y++;
		for (z = 0; z < y; z++)
		{
			y--;
			swch = *(s + z);
			*(s + z) = *(s + y);
			*(s + y) = swch;
		}
}
