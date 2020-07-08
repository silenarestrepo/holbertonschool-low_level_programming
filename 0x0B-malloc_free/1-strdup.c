#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *           containing a copy of the string given as a parameter
 * @str: pointer containing the string to be duplicated
 * Return: pointer to the copied string if success, NULL if error
 */
char *_strdup(char *str)
{
	unsigned int a, b;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}

	a = 0;
	while (str[a] != 0)
		b++;

	ptr = malloc(sizeof(char) * (a + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}
	b = 0;
	while ((ptr[b] = str[b]) != '\0')
		b++;

	return (ptr);
}
