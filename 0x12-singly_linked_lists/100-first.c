#include "lists.h"

void __attribute__((constructor)) before_main(void);

/**
 * before_main - prints something before main
 * Return: nothing
 */
void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
