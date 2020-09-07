#include "holberton.h"

/**
 * _memcpy - copy n bytes from src to dest
 * @dest: destination pointer
 * @src: source pointer
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int i = 0;

	while (i < n)
	{

		dest[i] = src[i];
		i++;

	}

	return (dest);
}
