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
int *arr, i = 0, range = max - min + 1;

if (min > max)
return (NULL);

arr = malloc(sizeof(min) * range);

if (arr == NULL)
return (NULL);

for (; i < range; i++)
arr[i] = min++;

return (arr);
}
