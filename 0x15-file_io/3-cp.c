#include "main.h"
#include<stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int close_file(int file);
int write_error(int file1, int file2, char *file_name);
int read_error(int file1, int file2, char *file_name);

/**
 * close_file - closes a file descriptor and prints
 * @file: file descriptor to close
 * Return: success
 */

int close_file(int file)
{
	int error;

	error = close(file);

	if (error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
		return (100);
	}
	return (0);
}

/**
 * write_error - write error
 * @file1: first file descriptor
 * @file2: second file descriptor
 * @file_name: file name
 * Return: success
 */

int write_error(int file1, int file2, char *file_name)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_name);
	close_file(file1);
	close_file(file2);
	return (99);
}

/**
 * read_error - the handler for a read error
 * @file1: first file descriptor
 * @file2: second file descriptor
 * @file_name: filename prompting the error
 * Return: success
 */
int read_error(int file1, int file2, char *file_name)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_name);
	close_file(file1);
	close_file(file2);
	return (98);
}

/**
 * main - main code
 * @argc: teh number of arg
 * @argv: the list of args
 * Return: the result
 */
int main(int argc, char *argv[])
{
	char tab[1024];
	int length_r, length_w, f_from, f_to, error;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}
	f_from = open(argv[1], O_RDONLY);

	if (f_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]);
		return (98);
	}
	f_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC,
		       S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (f_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close_file(f_from);
		return (99);
	}
	do {
		length_r = read(f_from, tab, 1024);
		if (length_r == -1)
			return (read_error(f_from, f_to, argv[1]));

		length_w = write(f_to, tab, length_r);
		if (length_w == -1 || length_w != length_r)
			return (write_error(f_from, f_to, argv[2]));
	} while (length_r == 1024);

	error = close_file(f_from);
	error = error + close_file(f_to);
	if (error != 0)
		return (100);
	return (0);
}
