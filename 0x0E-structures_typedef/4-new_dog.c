#include "dog.h"
#include <stdlib.h>
/**
 * my_strlen - finds string length in order to malloc properly
 * @str: input string
 * Return: string length unsigned integer
 */
unsigned int my_strlen(char *str)
{
	unsigned int i = 0;

	while (*(str + i) != '\0')
		i++;
	return (i);
}
/**
 * my_strcpy - copies string
 * @to: pointer to new string
 * @from: pointer to string to copy
 * Return: void
 */
void my_strcpy(char *to, char *from)
{
	unsigned int i, len = my_strlen(from);

	for (i = 0; i <= len; i++)
		to[i] = from[i];
}
/**
 * new_dog - creates new type of struct dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: pointer to the type of struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int name_len = my_strlen(name), owner_len = my_strlen(owner);
	dog_t *gucci;

	gucci = malloc(sizeof(dog_t));
	if (gucci)
	{
		gucci->name = malloc(sizeof(char) * (name_len + 1));
		if (gucci->name)
		{
			gucci->owner = malloc(sizeof(char) * (owner_len + 1));
			if (gucci->owner)
			{
				my_strcpy(gucci->name, name);
				gucci->age = age;
				my_strcpy(gucci->owner, owner);
				return (gucci);
			}
			else
			{
				free(gucci);
				free(gucci);
			}
		}
		else
			free(gucci);
	}
	return (NULL);
}
