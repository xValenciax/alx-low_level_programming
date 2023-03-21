#include "main.h"
/**
 * main - Entry point
 *
 * Return: always 0 (Success)
 */

int main(void)
{
print_alphabet();
return (0);
}

/**
 * print_alphabet - prints entire alphabet in lower case
 *
 * Return: always void
 */
void print_alphabet(void)
{
char strt = 'a';

while (strt <= 'z')
{
_putchar(strt);
strt++;
}
_putchar('\n');
}
