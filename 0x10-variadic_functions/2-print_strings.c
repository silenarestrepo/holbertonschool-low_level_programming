#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

 /**
 * print_strings - prints strings separated by separator
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ab;
	unsigned int i = 0;
	char *string;

	if (separator == NULL)
		return;
	va_start(ab, n);
	string = va_arg(ab, char*);

	for (; i < n; i++)
	{
	if (string == NULL)
		printf("%s", ("nil"));
	else
		printf("%s", string);
	string = va_arg(ab, char*);

	if (i < (n - 1))
	printf("%s", separator);
	}
	printf("\n");
	va_end(ab);
}

