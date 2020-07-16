#include "3-calc.h"

 /**
 * get_op_func - points a function to another function
 * @s: operator given by the user
 * Return: pointer to function that does the operation
 */

int (*get_op_func(char *s))(int, int)
{
  op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i;

	i = 0;
	while (i < 5)
	{
		if (*(ops[i].op) == *s)
		{
			return (ops[i].f);
		}
		i++;
	}

	return (0);

}
