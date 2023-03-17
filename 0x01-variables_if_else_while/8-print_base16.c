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
char hex = 48;
while (hex <= 102)
{
if (hex == 58)
{
hex = 97;
}
putchar(hex);
hex++;
}
putchar('\n');
return (0);
}
