#include "variadic_functions.h"

/**
 * print_numbers - prints the numbers followed by a new line
 *
 * @separator: string to be printed between numbers
 * @n: number of integers passed
 *
 * Return: always void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list numbers;
unsigned int i = 0;

if (!n)
return;

va_start(numbers, n);

while (i < n)
{
printf("%d", va_arg(numbers, int));

if (separator && (i + 1) % n)
printf("%s", separator);

i++;
}
va_end(numbers);

printf("\n");
}
