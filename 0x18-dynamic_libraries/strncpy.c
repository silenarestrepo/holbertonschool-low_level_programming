#include "holberton.h"

/**
 * _strncpy - copy a string
 * @dest: variable where string will be copied
 * @src: variable that will provide a string
 * @n: size limit of bytes to be copied
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int cont;
	cont = 0;

	while (src[cont] != '\0' && cont < n)
	{
		dest[cont] = src[cont];
		cont++;
	}
	while (cont < n)
	{
		dest[cont] = '\0';
		cont++;
	}
	return (dest);
}
