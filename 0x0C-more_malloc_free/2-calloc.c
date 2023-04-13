#include "main.h"

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
/* unsigned int i = 0; */

if (nmemb == 0 || size == 0)
return (NULL);

ptr = malloc(nmemb * size);

if (ptr == NULL)
return (NULL);

return (ptr);
}
