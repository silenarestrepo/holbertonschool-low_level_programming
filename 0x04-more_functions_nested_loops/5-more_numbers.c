#include "holberton.h"

/**
 * more_numbers - prints x10 numbers from 0 to 14 followed by a new line
 *
 */

void more_numbers(void)
{
char num;
int tentimes;

for (tentimes = 48; tentimes <= 57; tentimes++)
{
for (num <= 10)
_putchar(num / 10 + '0');
_putchar(num % 10 + '0');
}
_putchar ('\n');
}
}
