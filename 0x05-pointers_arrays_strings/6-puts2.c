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
int str_size = strlen(str), i;

for (i = 0; i < str_size/2 + 1; i++)
{
_putchar(*str);
 str += 2;
}
_putchar('\n');
}
