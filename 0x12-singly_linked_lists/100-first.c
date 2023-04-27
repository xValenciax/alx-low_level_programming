#include "lists.h"

void premain(void) __attribute__((constructor));

/**
 * premain - executes a piece of code before main is invoked
 *
 *Return: always void
 */

void premain(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
