#include "3-calc.h"

/**
 * main - calls the functions for operations to be done
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: a number as a result
 */

int main(int ac, char **av)
{
	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (get_op_func(av[2]) == NULL || av[2][1])
	{
		printf("Error\n");
		exit(99);
	}

	printf("%i\n", get_op_func(av[2])(atoi(av[1]), atoi(av[3])));

	return (0);
}
