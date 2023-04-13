#include "main.h"

/**
 * _memset - initializes an array to a const
 *
 * @s: the space to be initialized
 * @b: constant value to initialize the array with
 * @n: number of bytes to initialize
 *
 * Return: initilaized array
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;

for (; i < n; i++)
*(s + i) = b;

return (s);
}


/**
 * _calloc - allocates memory for an array using malloc initialized to 0
 *
 * @nmemb: number of elements to be allocated
 * @size: number of bytes to allocate for each element
 *
 * Return: a void pointer to the newly allocated space
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
unsigned int i = 0;

if (nmemb == 0 || size == 0)
return (NULL);

ptr = malloc((nmemb * size));

if (ptr == NULL)
return (NULL);

_memset(ptr, 0, (nmemb * size));

return (ptr);
}
