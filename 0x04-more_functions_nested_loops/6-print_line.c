#include "main.h"

/**
 * print_line - prints an _ n times
 *
 * @n: number of time to print _
 *
 * Return: always void
 */


void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
return;
}
while (n--)
{
_putchar('_');
}
_putchar('\n');
}
