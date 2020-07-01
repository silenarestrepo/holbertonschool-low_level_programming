#include "holberton.h"

/**
 * factorial - return the factorial of a given number
 * @n: given number
 * Return: n
 */

int factorial(int n)
{
if (n < 0) 
{
return (-1);
}
else  if (n == 0)
{
return (1);
}
return (n = n * factorial(n - 1));
}

