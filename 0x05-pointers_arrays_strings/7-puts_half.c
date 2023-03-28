#include "main.h"

/**
 * puts_half - print the second half of a string
 *
 * @str: input string
 *
 * Return: always void
 */

void puts_half(char *str)
{
int counter = 0, i;

while (*(str + counter) != '\0')
counter++;
counter--;

i = counter / 2 + 1;

while (*(str + i) != '\0')
{
_putchar(*(str + i));
i++;
}
_putchar('\n');
}
