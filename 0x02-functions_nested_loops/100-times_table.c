#include "main.h"
#include <stdio.h>
/**
 * print_times_table - prints the n time table
 *
 * @n: number to print the times table up to
 *
 * Return: always void
 */
void print_times_table(int n)
{
int i, j;

if (n > 15 || n < 0)
return;
if (n == 0)
{
printf("0\n");
return;
}
i = 0;
j = 0;
while (i <= n)
{
j = 0;
while (j <= n)
{
int res = i *j;
if (j == 0)
printf("%d,", res);
else if (j == n)
printf("%4d", res);
else
printf("%4d,", res);
j++;
}
i++;
printf("\n");
}
}
