#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @index: index starting from 0
 * @n: bit
 * Return: the value of the bit at an index or -1 if failed
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);
	return ((n >> index) & 1);
}
