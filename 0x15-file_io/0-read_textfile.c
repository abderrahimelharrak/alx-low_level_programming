#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it to POSIX
 * @filename: the file name
 * @letters: the number of caracts
 * Return: success
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int x;
	int l, w_char;
	char *tab;

	if (filename == NULL || letters == 0)
		return (0);

	tab = malloc(sizeof(char) * (letters));

	if (tab == NULL)
		return (0);

	x = open(filename, O_RDONLY);

	if (x == -1)
	{
		free(tab);
		return (0);
	}

	l = read(x, tab, letters);

	if (l == -1)
	{
		free(tab);
		close(x);
		return (0);
	}

	w_char = write(STDOUT_FILENO, tab, l);

	free(tab);
	close(x);

	if (w_char != l)
		return (0);
	return (l);
}
