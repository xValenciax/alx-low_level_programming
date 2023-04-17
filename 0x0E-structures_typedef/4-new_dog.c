#include "dog.h"

/**
 * new_dog - creates a new dog struct
 *
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner of the new dog
 *
 * Return: a pointer to the newly created dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *created_dog;

created_dog = malloc(sizeof(dog_t));

if (!created_dog)
return (NULL);

created_dog->name = malloc(sizeof(name));
if (!created_dog->name)
return (NULL);

strcpy(created_dog->name, name);

created_dog->age = age;

created_dog->owner = malloc(sizeof(owner));
if (!created_dog->owner)
return (NULL);

strcpy(created_dog->owner, owner);

return (created_dog);
}
