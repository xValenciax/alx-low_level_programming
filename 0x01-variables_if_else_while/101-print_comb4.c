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
int thrdDig;

firstDig = 48;
scndDig = 49;
thrdDig = 50;

while (firstDig < 56)
{
while (scndDig < 57)
{
while (thrdDig < 58)
{
putchar(firstDig);
putchar(scndDig);
putchar(thrdDig);

if (firstDig != 55)
{
putchar(',');
putchar(' ');
}
thrdDig++;
}
scndDig++;
thrdDig = scndDig + 1;
}
scndDig = firstDig + 1;
firstDig++;
}
putchar('\n');
return (0);
}
