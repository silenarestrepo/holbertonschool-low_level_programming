#include "holberton.h"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: string to write to the file
 * Return: 1 if success and -1 if fails
 */

int create_file(const char *filename, char *text_content)
{
	int fd, i;
	ssize_t wr;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, 00600);
	if (fd == -1)
		return (-1);

	if (!text_content)
		return (1);

	for (i = 0; text_content[i]; i++)
		;
	wr = write(fd, text_content, i);
	if (wr == -1)
		return (-1);
	return (1);
}
