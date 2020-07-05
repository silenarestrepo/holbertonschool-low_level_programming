#include "holberton.h"

/**
 * _strspn - calculates the length of the initial segment
 * of str1 which consists entirely of characters in str2.
 * @s: The main string to be scanned.
 * @accept: The list of characters to match in s.
 *
 * Return: return the length
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int s_count, a_count;

	for (s_count = 0; s[s_count] != '\0'; s_count++)
	{
		for (a_count = 0; accept[a_count] != '\0'; a_count++)
			if (s[s_count] == accept[a_count])
				break;
		if (accept[a_count] == '\0')
			break;
	}
	return (s_count);
}
