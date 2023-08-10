#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: The name of the file,
 * @text_content: string to add at the end of the file.
 *
 * Return: 1 on success or -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int num_letters;
	int writ_ret;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (num_letters = 0; text_content[num_letters]; num_letters++)
			;

		writ_ret = write(fd, text_content, num_letters);

		if (writ_ret == -1)
			return (-1);
	}
	close(fd);
	return (-1);
}
