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
	int x, length = 0;

	if (filename == NULL)
		return (-1);

	fichier = open(filename, O_WRONLY | O_APPEND);
	if (text_content != NULL)
	{
		while (text_content[length])
			length++;
	}
	x = write(fichier, text_content, length);
	if (fichier == -1)
		return (-1);
	if (x == -1)
		return (-1);
	clode(fichier);
	return (1);

}
