#include "_putchar.c"
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
