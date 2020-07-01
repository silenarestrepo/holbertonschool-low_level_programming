#include "holberton.h"

/**
 * _strpbrk - Search the first occurence of any of the bytes in *accept.
 * @s: Travel this string.
 * @accept: bytes to read the occurence in s.
 *
 * Return: return the first occurence.
 */

char *_strpbrk(char *s, char *accept)
{

	unsigned int s_count, a_count;

	for (s_count = 0; s[s_count] != '\0'; s_count++)
	{
		for (a_count = 0; accept[a_count] != '\0'; a_count++)
			if (s[s_count] == accept[a_count])
				return (&s[s_count]);
	}
	return (0);
}
