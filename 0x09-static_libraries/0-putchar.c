#include <unistd.h>

/**
 * _putchar - print a caracter 
 * @c: the caracter to print
 * Return: 1 on success -1 in error
 */

int _putchar(char c)
{
	return (write(1 , &c , 1);
}			
