#include "holberton.h"

/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int num = 0;

	if (b == NULL)
		return (0);

	while (b[i])
	{
		num = num << 1;
		if (b[i] < '0' || b[i] > '1')
			return (0);
		else if (b[i] == '1')
			num = num | 1;
		i++;
	}

	return (num);

}
