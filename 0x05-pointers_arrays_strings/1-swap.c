#include "holberton.h"

/**
 * swap_int - replaces values of variables
 * @a: variable's value to be swapped to b
 * @b: variable's value to be swapped to a
 */
void swap_int(int *a, int *b)
{
int aa;

aa = *a;

*a = *b;
*b = aa;

}
