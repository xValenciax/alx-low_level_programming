#include "main.h"

/**
 * _realloc - reallocates the size of a memory block
 *
 * @ptr: pointer to the memory previously allocated by malloc
 * @old_size: size in bytes of the allocated space for ptr
 * @new_size: new size in bytes of the new memory block
 *
 * Return: a pointer to the newly reallocated size
 * NULL if new size equals old size
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;
unsigned int i = 0, min = old_size < new_size ? old_size : new_size;

if (old_size == new_size)
return (ptr);

if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}

new_ptr = malloc(new_size);

if (new_ptr == NULL)
return (NULL);

if (ptr == NULL)
return (new_ptr);

for (; i < min; i++)
*((char *)new_ptr + i) = *((char *)ptr + i);

free(ptr);

return (new_ptr);
}
