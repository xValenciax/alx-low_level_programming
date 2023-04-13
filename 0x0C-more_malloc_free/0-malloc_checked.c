#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: the size to be allocated
 *
 * Return: a void pointer to the newly allocated space, exits otherwise
 */

void *malloc_checked(unsigned int b)
{
void *space = malloc(b);

if (space == NULL)
exit(98);
else
return (space);
}
