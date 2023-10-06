#include "main.h"

/*
 * create_file - function that creates a file.
 * @filename: Name of the file to create.
 * @text_content: A NULL terminated string to write to the file.
 *
 * Returns: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file, i = 0;

	if (!filename)
		return (-1);
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	while (text_content[i])
		i++;
	write(file, text_content, i);
	close(file);

	return (1);

}
