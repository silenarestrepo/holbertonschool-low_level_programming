#include "holberton.h"

/**
 * *_strchr - locate a char in a string
 * @s: string to be searched
 * @c: char to be found
 * Return: return a pointer to the
 * first occurence of the character
 */
char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == c)
		{
			s = &s[a];
			return (s);
		}
	}
	if (c == '\0')
	return (&s[a]);
	return (0);
}
