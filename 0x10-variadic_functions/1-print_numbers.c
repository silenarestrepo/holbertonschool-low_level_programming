#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

 /**
 * print_numbers - prints integers separated by separator
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

	va_list ab;
	unsigned int i = 0;

	if (separator == NULL)
		return;

	va_start(ab, n);

	for (; i < n; i++)

	{

	printf("%d", va_arg(ab, int));

	if (i < (n - 1))
	printf("%s", separator);

	}

	printf("\n");

	va_end(ab);
}
