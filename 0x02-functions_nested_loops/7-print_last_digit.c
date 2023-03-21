#include "main.h"
/**
 * print_last_digit - prints the last digit of an integer
 *
 * @n: number for which last digit is to be printed
 *
 * Return: last digit of n
 */

int print_last_digit(int n)
{
int last_dig = n % 10;
_putchar('0' + last_dig);
return (last_dig);
}