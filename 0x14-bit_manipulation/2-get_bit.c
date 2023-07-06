#include "main.h"

/**
 * get_bit - gets the value of a bit at given index
 *
 * @n: number to get the bit from
 * @index: index of the bit to return
 *
 * Return: value of found bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
return ((n >> index) & 0x1);
}
