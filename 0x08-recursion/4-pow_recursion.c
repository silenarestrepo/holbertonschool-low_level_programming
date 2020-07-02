#include "holberton.h"

/**
 * _pow_recursion - returns factorial of a number
 * @x: base
 * @y: exponent
 * Return: x
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
