#include "main.h"

/**
 * print_triangle - prints a triangle of size n
 *
 * @size: size of the triangle
 *
 * Return: Always void
 */

void print_triangle(int size)
{
int spaces = size - 1, tris = size - spaces, cnt = 0, tmp, tmp2;

if (size <= 0)
{
_putchar('\n');
return;
}
while (cnt < size)
{
tmp = spaces;
while (tmp--)
{
_putchar(' ');
}
tmp2 = tris;
while (tmp2--)
{
_putchar('#');
}
_putchar('\n');
spaces--;
tris++;
cnt++;
}
}
