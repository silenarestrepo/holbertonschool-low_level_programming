#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
*print_strings - print strings
*@separator: pointer constant
*@n: variable constant
*Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ab;
	unsigned int i = 0;
	char *string;

	va_start(ab, n);
	string = va_arg(ab, char*);

	for (; i < n; i++)
	{
		if (string == NULL)
			printf("%s", ("nil"));
		else
			printf("%s", string);
		string = va_arg(ab, char*);

		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ab);
}

