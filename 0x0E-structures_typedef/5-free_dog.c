#include "dog.h"

/**
 * free_dog - frees a varible of type struct dog
 *
 * @d: variable to be freed
 *
 * Return: Always void
 */

void free_dog(dog_t *d)
{
if (!d)
return;

free(d->name);
free(d->owner);

free(d);
}
