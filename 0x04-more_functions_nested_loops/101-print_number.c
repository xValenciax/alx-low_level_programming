#include "main.h"
#include <math.h>

/**
 * print_number - prints an integer into stdout
 *
 * @n: number to be printed
 *
 * Return: always void
 */

void print_number(int n)
{
int no_digs = 0;
int tmp = n;

if (n == 0)
_putchar('0');

if (n < 0)
{
n *= -1;
_putchar('-');
}

while (tmp != 0)
{
tmp /= 10;
no_digs++;
}
while (no_digs != 0)
{
int val = 1, i = 0;
while (i < no_digs - 1)
{
val *= 10;
i++;
}
tmp = n / val;
_putchar('0' + (tmp % 10));
no_digs--;
}
}
