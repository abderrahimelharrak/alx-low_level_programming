#include "main.h"

/**
 * append_text_to_file - creates a file and puts text in it
 * @filename: the name of the file
 * @text_content: the text to put into file
 * Return: 1 if done -1 otherwise
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fichier;
	ssize_t length = 0, inlength = 0;
	char *tab;

	if (filename == NULL)
		return (-1);

	fichier = open(filename, O_WRONLY | O_APPEND);

	if (fichier == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (tab = text_content; *tab; tab++)
			inlength++;
		length = write(file, text_content, inlen);
	}

	if (close(fichier) == -1 || inlength != length)
		return (-1);

	return (1);
}
