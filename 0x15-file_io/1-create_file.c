#include "main.h"

/**
 * create_file - creates a file and puts text in it
 * @filename: name of the file
 * @text_content: text in the file
 * Return: 1 if it successed 0 otherwise
 */

int create_file(const char *filename, char *text_content)
{
	int file, writ;
	int length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[length])
			length++;
	}

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	writ = write(file, text_content, length);

	if (file == -1 || writ == -1)
		return (-1);

	close(file);

	return (1);

}
