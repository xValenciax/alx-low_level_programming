#include "main.h"

/**
 * print_to_98 - prints all numbers in rang n - 98
 *
 * @n: start of range
 *
 * Return: Void
 */

void print_to_98(int n)
{
if (n < 98)
{
int cnt = n;
while (cnt <= 98)
{
_putchar(n + '0');
if (cnt != 98)
{
_putchar(',');
_putchar(' ');
}
cnt++;
}
return;
}
while (n >= 98)
{
_putchar(n + '0');
if (n != 98)
{
_putchar(',');
_putchar(' ');
}
n--;
}
}
