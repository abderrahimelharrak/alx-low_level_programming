#include "hash_tables.h"
/**
 * hash_djb2 - djb2 algorithm for generate hash values
 * @str: string used to generate hash value
 * Return: success
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int y;
	int x;

	y = 5381;
	while ((x = *str++))
	{
		y = ((y << 5) + y) + x;
	}
	return (y);
}
