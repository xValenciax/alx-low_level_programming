#include "main.h"

/**
 * is_prime - helper function to find dividors of a number
 *
 * @s: number to divide by
 * @n: number to check for primality
 *
 * Return: 1 if number can't be divided by any other that itself
 * 0 otherwise
 */

int is_prime(int s, int n)
{
if (n % s == 0)
return (0);

if (s * s >= n)
return (1);

return (is_prime((s + 1), n));

}

/**
 * is_prime_number - checks if number is prime
 *
 * @n: input number
 *
 * Return: 1 if number is prime, 0 otherwise
 */

int is_prime_number(int n)
{
if (n < 2)
return (0);

return (is_prime(2, n));
}
