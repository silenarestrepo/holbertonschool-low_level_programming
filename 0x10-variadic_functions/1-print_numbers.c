#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
*print_numbers - function
*@separator: variable constant
*@n: variable constant
*Return: 0
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{

	va_list ab;
	unsigned int i = 0;

	va_start(ab, n);

	for (; i < n; i++)

	{

	printf("%d", va_arg(ab, int));

	if (i != (n - 1) && separator != NULL)
	printf("%s", separator);

	}

	printf("\n");

	va_end(ab);
}
