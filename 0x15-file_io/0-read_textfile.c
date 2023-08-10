#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * read_textfile - A function that reads a text file,
 *		and prints to standard output(1).
 * @filename: Textfile to be read(string pointer).
 * @letters: Number of letters it should read and print.
 *
 * Return: number of letters it would read and print,
 *		0 if function fails,if filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	ssize_t num_read, num_writ;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);


	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	num_read = read(fd, buff, letters);

	num_writ = write(STDOUT_FILENO, buff, num_read);

	free(buff);
	close(fd);
	return (num_writ);
}
