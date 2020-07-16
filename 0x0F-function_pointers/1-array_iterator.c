#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

 /**
 * array_iterator - execute a function given as a parameter
 * @array: array containing elements
 * @size: size of the array
 * @action: pointer to the function needed
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	action(array[i]);
	i++;
}
