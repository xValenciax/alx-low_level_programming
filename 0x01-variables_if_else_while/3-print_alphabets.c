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
char lower_c;
char upper_c;


lower_c = 'a';
upper_c = 'A';

while (lower_c <= 'z')
{
putchar(lower_c);
lower_c++;
}

while (upper_c <= 'Z')
{
putchar(upper_c);
upper_c++;
}

putchar('\n');
return (0);
}
