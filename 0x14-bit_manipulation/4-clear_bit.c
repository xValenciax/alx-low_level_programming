#include "main.h"

/**
 * clear_bit - sets the bit at given index to 0
 *
 * @n: number to set the bit in
 * @index: the specified index
 *
 * Return: 1 (Success), 0 (Failure)
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(n) * 8)
return (-1);

*n &= ~(1 << index);

return (1);
}
