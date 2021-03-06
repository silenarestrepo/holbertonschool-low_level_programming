#include "holberton.h"

/**
 * _memset - fill memory with a constant byte
 *           pointed to by @s with the constant byte @b.
 * @s: A pointer to the memory area to be filled.
 * @b: The character to fill the memory area with.
 * @n: The number of bytes to be filled.
 *
 * Return: A pointer to the filled memory area @s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	for (i = 0; i < n; i++)
		*(s + i) = b;

	return (s);
}
