#include "function_pointers.h"

/**
 * array_iterator - performs a given action on each element of array
 *
 * @array: array input
 * @size: size of array
 * @action: function to be executed of each element
 *
 * Return: always void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i = 0;

if (!array)
return;

if(!size)
return;

while (i < size)
action(array[i]), i++;
}
