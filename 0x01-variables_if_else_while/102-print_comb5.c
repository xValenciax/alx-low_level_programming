#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int firstDig, scndDig, thrdDig, frthDig;

firstDig = 48, scndDig = 48, thrdDig = 48, frthDig = 49;
while (firstDig != 57 || scndDig != 57)
{
if (frthDig != 58)
{
putchar(firstDig), putchar(scndDig), putchar(' ');
putchar(thrdDig), putchar(frthDig);
if (firstDig != 57 || scndDig != 56)
putchar(','), putchar(' ');
}
frthDig++;
if (frthDig > 57)
{
frthDig = 48;
if (thrdDig == 57)
{
if (scndDig == 57)
firstDig++, scndDig = 48, thrdDig = firstDig;
else
scndDig++;
thrdDig = firstDig, frthDig = scndDig + 1;
}
else
thrdDig++;
}
}
putchar('\n');
return (0);
}
