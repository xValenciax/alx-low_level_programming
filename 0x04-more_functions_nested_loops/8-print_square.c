#include "main.h"

/**
 * print_square - prints an nxn square of #
 *
 * @size: the size of the square
 *
 * Return: always void
 */

void print_square(int size)
{
int width = size, height = size;

if (size <= 0)
{
_putchar('\n');
return;
}
while (width--)
{
height = size;
while (height--)
{
_putchar('#');
}
_putchar('\n');
}
}
