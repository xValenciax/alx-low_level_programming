#include "main.h"

/**
 * array_range - creates an array of integers that contains all values
 * from min to max ordered
 *
 * @min: minimum value to start with
 * @max: maximum value to start with
 *
 * Return: a pointer to the newly created array
 */

int *array_range(int min, int max)
{
int *arr;
int i = min;

if (min > max)
return (NULL);

arr = malloc(max - min + 1);

if (arr == NULL)
return (NULL);

for (; i <= max; i++)
arr[i] = i;

return (arr);
}
