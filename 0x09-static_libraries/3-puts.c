#include "holberton.h"
/**
 * _puts - print a string followed by a new line
 * @s: variable that contains the string
 */
void _puts(char *s)
{
	int a;

	a = 0;
	while (s[a] != '\0')
	{
		_putchar(s[a]);
		a++;
	}
	_putchar('\n');
}
