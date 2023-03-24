#include "main.h"
#include <math.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
/* largest_prime_factor(); */
/* int r = is_prime(5); */
largest_prime_factor(612852475143);
return (0);
}


/**
 * largest_prime_factor - prints the largest prime factor of a number
 *
 * @n: number for which LPF is printed
 *
 * Return: Always void
 */

void largest_prime_factor(unsigned long int n)
{
int i = 3;
unsigned long int largest = 0;

while (n % 2 == 0)
n /= 2;

while (i < sqrt(n))
{
while (n % i == 0)
n /= i, largest = i;

i += 2;
}

if (n > 2)
largest = n;

printf("%lu\n", largest);
}
