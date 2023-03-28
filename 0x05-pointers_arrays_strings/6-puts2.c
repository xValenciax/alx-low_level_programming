#include "main.h"

/**
 * puts2 - prints everyother character of a string
 *
 * @str: string input
 *
 * Return: always void
 */

void puts2(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
str++;
}
_putchar('\n');
}
