#include "main.h"

/**
 * reverse_array - reverses the content of an array of ints
 *
 * @a: array to be reversed
 * @n: size of the array
 *
 * Return: Always void
 */

void reverse_array(int *a, int n)
{
int left, right, tmp, tmp2;

left = 0, right = n - 1;

while (left != right)
{
tmp = a[left];
tmp2 = a[right];

a[left] = tmp2;
a[right] = tmp;

left++, right--;
}
}
