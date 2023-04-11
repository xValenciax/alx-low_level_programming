#include "main.h"

/**
 * create_array - create an array of chars initialized to a specific char
 *
 * @size: the size of the array to be created
 * @c: the char to initialize the array with
 *
 * Return: a pointer to char to the first element of the array
 */

char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int i = 0;

if (size == 0)
return (NULL);

arr = malloc(size * sizeof(*arr));

if (arr == NULL)
return (NULL);

else
{
while (i < size)
{
*(arr + i) = c;
i++;
}
}

return (arr);
}
