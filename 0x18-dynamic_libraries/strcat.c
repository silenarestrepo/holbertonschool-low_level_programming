#include "holberton.h"
/**
 * _strcat - concatenate two strings
 * @dest: variable where the string will be stored
 * @src: variable that will store the second string
 * Return: in progress
 */
char *_strcat(char *dest, char *src)
{
	int dest_c = 0;
	int src_c = 0;

	while (dest[dest_c] != '\0')
	{
		dest_c++;
	}

	while (src[src_c] != '\0')
	{
		dest[dest_c] = src[src_c];
		src_c++;
		dest_c++;
	}

	dest[dest_c] = '\0';

	return (dest);
}
