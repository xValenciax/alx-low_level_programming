#include "main.h"

/**
 * times_table - prints multiplication tables from 0 to 9
 *
 * Return: void
 */

void times_table(void)
{
int multiplicant = 0;
int num = 0;
while (multiplicant < 10)
{
while (num < 10)
{
int res = num * multiplicant;
if (num == 0)
{
_putchar(res + '0');
}
if (res < 10 && num != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(res + '0');
}
else if (res >= 10)
{
_putchar(',');
_putchar(' ');
_putchar((res / 10) + '0');
_putchar((res % 10) + '0');
}
num++;
}
multiplicant++;
num = 0;
_putchar('\n');
}
}
