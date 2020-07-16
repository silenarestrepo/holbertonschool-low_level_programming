#include "function_pointers.h"

/**
 * array_iterator - executes a function in every member into an array.
 * @array: array to use for execution.
 * @size: size of the array.
 * @action: pointer to function to use.
 *
 * Return: it returns nothing.
 */
void array_iterator(int *array, size_t size, void(*action)(int))

{
	unsigned int i;

	if (array != NULL && action != NULL)
		return;

		for (i = 0; i < size; i++)
		action(array[i]);
		i++;
}
