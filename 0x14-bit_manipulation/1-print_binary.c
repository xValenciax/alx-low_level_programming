#include "main.h"

/**
 * print_binary_rec - prints the binary representation recursively
 *
 * @n: integer to be converted
 *
 * Return: always void
 */
void print_binary_rec(unsigned long int n)
{
if (!n)
return;

print_binary_rec(n / 2);
_putchar((n % 2) + '0');
}

/**
 * print_binary - prints the binary representation of an integer
 *
 * @n: integer to be converted
 *
 * Return: always void
 */

void print_binary(unsigned long int n)
{
if (!n)
_putchar('0');

print_binary_rec(n);
}
