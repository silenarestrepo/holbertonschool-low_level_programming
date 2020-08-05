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
	int a, fwd;



	if (letters == 0)
		return (0);
	buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
		return (0);

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	fwd = read(fd, buf, sizeof(char) * letters);

	if (fwd == -1)
	{
		return (0);
	}
	a = write(STDOUT_FILENO, buf, fwd);

	if (a == -1)
	{
		return (0);
	}

	close(fd);

	free(buf);
	return (a);
}
