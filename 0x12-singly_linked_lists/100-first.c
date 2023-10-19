#include <stdio.h>

/* Prototype */
void print_before_main(void) __attribute__((constructor));

/**
 * print_before_main - as the name implies
 * Return: void as in none
 */
void print_before_main(void)
{
printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n"
		);
}
