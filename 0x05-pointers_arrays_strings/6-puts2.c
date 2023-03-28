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
int str_size = strlen(str);
if(str_size == 0)
return;
while (*str != '\0')
{
_putchar(*str);
 str += 2;
}
_putchar('\n');
}
