#include "dog.h"
#include <stdio.h>
#define mNULL "(nil)"
/**
 * print_dog - prints a dog's structure
 * @d: structure where dog came from
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	printf("Name: %s\n", (d->name != NULL ? d->name : mNULL));
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL ? d->owner : mNULL));
}
