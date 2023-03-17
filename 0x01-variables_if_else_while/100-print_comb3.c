#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all digits below 10 using only putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int firstDig;
int scndDig;

firstDig = 48;
scndDig = 49;

while (firstDig < 57)
{
putchar(firstDig);
putchar(scndDig);
if (firstDig != 56)
{
putchar(',');
putchar(' ');
}
if (scndDig == 57)
{
scndDig = firstDig + 1;
firstDig++;
}
scndDig++;
}

putchar('\n');
return (0);
}
