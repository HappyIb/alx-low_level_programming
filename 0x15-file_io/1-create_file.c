#include "main.h"

/**
 * create_file - function that creates a file and write contents in it.
 *
 * @filename:the name of the file created,
 * @text_content: a string to write to the file
 * Return: 1 if successful or -1 if unsuccessful(failed)
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int num_letters;
	int rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (num_letters = 0; text_content[num_letters]; num_letters++)
		;
	rwr = write(fd, text_content, num_letters);

	if (rwr == -1)
		return (-1);
	close(fd);

return (1);
}
