#include "holberton.h"

/**
 * print_most_numbers -  print the numbers from 0 to 9 followed by a new line.
 *
 */
void print_most_numbers(void)
{
char num;
for (num = 48; num <= 57; num++)
if (num != 50 && num != 52)
{
_putchar (num);
}
_putchar ('\n');
}
