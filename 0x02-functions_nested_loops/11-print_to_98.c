#include "main.h"
#include <stdio.h>
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
printf("%d", cnt);
if (cnt != 98)
printf(", ");
cnt++;
}
return;
}
while (n >= 98)
{
printf("%d", n);
if (n != 98)
{
printf(", ");
}
n--;
}
}
