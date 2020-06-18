#include "holberton.h"

/**
 * print_line - draws a straight line in the terminal.
 * is input
 * @n: integer
 */

void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int times;
for (times = 1; times <= n; times++)
{
_putchar('_');
}
_putchar('\n');
}
}
