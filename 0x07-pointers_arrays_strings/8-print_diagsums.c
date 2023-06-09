#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 *
 * @a: square matrix
 * @size: size of the matrix
 *
 * Return: always void
 */

void print_diagsums(int *a, int size)
{
int i = 0, j = 0, rows = 0;
long int sum1 = 0, sum2 = 0;

for (; rows < size; rows++)
{
for (; j < size; j++)
{
if (rows == j)
sum1 += a[j + i];
if (abs(size - (rows + 1) == j))
sum2 += a[j + i];
}
i += size;
j = 0;
}
printf("%ld, %ld\n", sum1, sum2);
}
