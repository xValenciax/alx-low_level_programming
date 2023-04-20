#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by a new line
 *
 * @separator: a string to be printed between strings
 * @n: number of arguments passed
 *
 * Return: always void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list strings;
unsigned int i = 0;

if (n <= 0)
{
printf("\n");
return;
}

va_start(strings, n);

while (i < n)
{
printf("%s", va_arg(strings, char *));

if (separator && (i + 1) % n)
printf("%s", separator);

i++;
}

va_end(strings);

printf("\n");
}
