#include "holberton.h"

/**
 * print_binary - prints a number as binary
 * @n: decimal number
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	else if (n == 1)
	{
		_putchar('1');
		return;
	}
	print_binary(n >> 1);
	putchar((n & 1) + '0');
}
