#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9 except 2 and 4
 *
 * Return: always void
 */

void print_most_numbers(void)
{
int i = 48;
while (i < 58)
{
if (i != 50 && i != 52)
_putchar(i);

i++;
}
putchar('\n');
}
