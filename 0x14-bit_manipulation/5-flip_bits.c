#include "main.h"

/**
 * flip_bits - returns the number of bits that needs flipping
 * to make number 'n' equal to number 'm'
 *
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int no_bits = 0;
int i = 0;

for (; i < 32; i++)
{
if (GET_BIT(n, i) != GET_BIT(m, i))
no_bits++;
}

return (no_bits);
}
