#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: the name of the file.
 * @text_content: The text to add to the end of the file.
 * Return: success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_d;
	ssize_t x = 0;
	int length = 0;

	if (text_content == NULL)
		length = 0;
	while (*text_length)
		length++;
	if (!filename)
		return (-1);
	file_d = open(filename, O_WRONLY | O_APPEND);
	if (file_d == -1)
		return (-1);

	if (length)
	{
		x = write(file_d, text_content, length);
	}
	close(file_d);
	return (x == length ? 1 : -1);
}

