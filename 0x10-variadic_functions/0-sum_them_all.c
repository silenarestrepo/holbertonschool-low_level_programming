#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - functions
 *@n: variable constant
 *Return: 0 or sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ab;
	unsigned int i = 0;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(ab, n);
	for (; i < n; i++)
		sum += va_arg(ab, int);

	va_end(ab);

	return (sum);
}
