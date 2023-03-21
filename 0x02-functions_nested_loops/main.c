#include "main.h"
/**
 * _putchar - prints a string to standard output
 *
 * @str: the string to be printed
 *
 * Description: This function uses write system call
 * to print the passed string to standard output
 *
 * Return: Always void
 */
void _putchar(char c)
{
putchar(c);
}

/**
 * print_alphabet - prints entire alphabet in lower case
 *
 * Return: always void
 */
void print_alphabet(void)
{
char strt = 'a';
 
while(strt <= 'z')
{
_putchar(strt);
strt++;
}
putchar('\n');
}

/**
 * print_alphabet - prints entire alphabet in lower case 10 time
 *
 * Return: always void
 */
void print_alphabet_x10(void)
{
char strt = 'a';
int cnt = 0;
while(cnt < 10)
{
while(strt <= 'z')
{
_putchar(strt);
strt++;
}
cnt++;
strt = 'a';
putchar('\n');
}
}
