#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints any kind of arguemnts being passed on
 * @format: list of arguement types
 */

void print_all(const char * const format, ...)
{
int i = 0;
char *string, *separator = "";
va_list ab;

va_start(ab, format);

if (format != NULL)
{
	while (format[i] != '\0')
	{
		switch (format[i])
		{
		case 's':
			string = va_arg(ab, char*);
			if (string == NULL)
				string = "(nil)";
			printf("%s%s", separator, string);
			break;
		case 'c':
			printf("%s%c", separator, va_arg(ab, int));
			break;
		case 'i':
			printf("%s%i", separator, va_arg(ab, int));
			break;
		case 'f':
			printf("%s%f", separator, va_arg(ab, double));
			break;
		default:
			i++;
			continue;
		}
		separator = ", ";
		i++;
	}

}
va_end(ab);
printf("\n");
}
