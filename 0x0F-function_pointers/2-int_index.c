#include "function_pointers.h"

/**
 * int_index - searches for an integer using a passed-in compare function
 *
 * @array: array to search in
 * @size: size of the array
 * @cmp: function used for comparison
 *
 * Return: index of found integer, or -1 in case of error or integer not found
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;

if (!array || !cmp || size <= 0)
return (-1);

while (i < size)
{
if (cmp(array[i]) != 0)
return (i);

i++;
}

return (-1);
}
