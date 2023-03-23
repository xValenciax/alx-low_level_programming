#include "main.h"

/**
 * print_diagonal - prints an \ n times perceeded by n-1 ' '
 *
 * @n: number of time to print \
 *
 * Return: always void
 */


void print_diagonal(int n)
{
int tmp = 0, tmp2 = 0;
if (n <= 0)
{
_putchar('\n');
return;
}
while (tmp < n)
{
tmp2 = 0;
while (tmp2 <= tmp)
{
if (tmp2 < tmp)
_putchar(' ');
else
_putchar('\\');
tmp2++;
}
_putchar('\n');
tmp++;
}
}
