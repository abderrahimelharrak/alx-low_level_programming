#include "main.h"

/**
 * create_file - creates a file and puts text in it
 * @filename: name of the file
 * @text_content: text in the file
 * Return: 1 if it successed 0 otherwise
 */

int create_file(const char *filename, char *text_content)
{
	int x_fl;
	int len, inlength;
	char *tab;

	len = 0;
	inlength = 0;
	if (filename == NULL)
		return (-1);

	x_fl = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (x_fl == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (inlength = 0, tab = text_content; *tab; tab++)
			inlen++;
		len = write(x_fl, text_content, inlength);
	}

	if (close(x_fl) == -1 || inlength != len)
		return (-1);

	return (1);
}
