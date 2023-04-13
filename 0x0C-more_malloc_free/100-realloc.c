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
int *new_ptr, *tmp = ptr;
unsigned int i = 0, min = old_size < new_size ? old_size : new_size;

if (old_size == new_size)
return (ptr);

if (new_size == 0 && tmp != NULL)
{
free(ptr);
return (NULL);
}

new_ptr = malloc(new_size);

if (new_ptr == NULL)
return (NULL);

if (tmp == NULL)
{
free(ptr);
return (new_ptr);
}

for (; i < min; i++)
new_ptr[i] = *(tmp + i);

free(ptr);

return ((void *)new_ptr);
}
