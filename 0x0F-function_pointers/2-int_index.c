#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

 /**
 * int_index - searches for an integer and returns the index of the first
		element for which the cmp function does not return to 0
 * @array: array containing the elements
 * @size: number of elements in the array
 * @cmp: pointer to the function to compare values
 * Return: i for index or return -1 if missing
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == NULL || array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
				return (i);
	}
	return (-1);
}
