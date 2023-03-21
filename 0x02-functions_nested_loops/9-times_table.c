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
_putchar(((multiplicant * num) / 10) + '0');
_putchar(((multiplicant * num) % 10) + '0');
_putchar(',');
_putchar(' ');
_putchar(' ');
num++;
}
multiplicant++;
num = 0;
_putchar('\n');
}
}
