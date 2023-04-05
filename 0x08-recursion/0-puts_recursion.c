#include "main.h"

/**
 * _puts_recursion - prints a string followed by a newline recursively
 *
 * @s: string to be printed
 *
 * Return: always void
 */

void _puts_recursion(char *s)
{
/* Base case */
if (*s == '\0')
{
_putchar('\n');
return;
}

/* action */
_putchar(*s);

/* Recursive call */
_puts_recursion((s + 1));
}
