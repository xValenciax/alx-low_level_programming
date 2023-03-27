#include "main.h"

/**
 * swap_int - swaps the values of two integers passed as pointers
 *
 * @a: the first integer pointer
 * @b: the second integer pointer
 *
 * Return: Always void
 */

void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
