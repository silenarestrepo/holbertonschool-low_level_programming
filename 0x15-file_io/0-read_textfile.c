#include "holberton.h"

/**
 * read_textfile - reads a text file
 * @letters: number of letter it should read and print
 * @filename: name of the file
 * Return: number of letters it could read and print and 0 otherwise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t num, wr;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	num = read(fd, buf, letters);

	close(fd);

	if (num == -1)
	{
		free(buf);
		return (0);
	}

	wr = (write(1, buf, num));

	free(buf);

	return (wr);
}
