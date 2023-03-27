#include "main.h"

/**
 * print_rev - reveses a string
 *
 * @s: string to be reversed
 *
 * Return: Always void
 */

void print_rev(char *s)
{
char *tmp = s;

while (*tmp != '\0')
tmp++;

tmp--;
while (tmp != s)
{
_putchar(*tmp);
tmp--;
}
_putchar(*s);
_putchar('\n');
}
