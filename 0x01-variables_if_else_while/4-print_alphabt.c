#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in both lower and upper case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;

c = 'a';

while (c <= 'z')
{
if (c != 'q' && c != 'e')
{
putchar(c);
}
c++;
}

putchar('\n');

return (0);
}
