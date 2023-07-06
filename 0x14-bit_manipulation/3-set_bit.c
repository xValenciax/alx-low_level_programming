#include "main.h"

/**
 * set_bit - sets the bit to 1 at the given index
 *
 * @n: the number to set the bit in
 * @index: the specified index
 *
 * Return: 1 (Success), 0 (Failure)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(n) * 8)
return (-1);

*n |= (0x1 << index);

return (1);
}
