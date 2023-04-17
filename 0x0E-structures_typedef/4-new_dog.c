#include "dog.h"

/**
 * _strlen - return the length of a string
 *
 * @s: string
 *
 * Return: the length of string s
 */

int _strlen(char *s)
{
int len;

for (len = 0; *s != '\0'; len++)
s++;

return (len);
}

/**
 * _strcpy - copies string 2 into string 1
 *
 * @dest: the string to be copied into
 * @src: the string to copy from
 *
 * Return: pointer to the copied string
 */

char *_strcpy(char *dest, char *src)
{
int i;

for (i = 0; *(src + i) != '\0'; i++)
{
dest[i] = *(src + i);
}
dest[i] = *(src + i);
return (dest);
}


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

created_dog->name = malloc(_strlen(name) + 1);
if (!created_dog->name)
{
free(created_dog);
return (NULL);
}

_strcpy(created_dog->name, name);
created_dog->name = created_dog->name;

created_dog->age = age;

created_dog->owner = malloc(_strlen(owner) + 1);
if (!created_dog->owner)
{
free(created_dog);
free(created_dog->name);
return (NULL);
}

_strcpy(created_dog->owner, owner);
created_dog->owner = created_dog->owner;

return (created_dog);
}
