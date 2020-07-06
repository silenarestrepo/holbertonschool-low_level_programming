#include "holberton.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: size of argv string
 * @argv: array of strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
