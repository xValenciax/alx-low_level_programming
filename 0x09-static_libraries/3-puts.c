#include "main.h"

/**
 * _puts - prints a string to stdout
 *
 * @str: string to be printed
 *
 * Return: Always void
 */

void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
