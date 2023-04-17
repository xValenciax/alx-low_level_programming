#include "dog.h"

/**
 * _memcpy - copies memory bytes from one area to another
 *
 * @dest: destination memory area
 * @src: source memory area
 * @n: number of bytes to be copied
 *
 * Return: pointer to dest area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int cnt = 0;

while (cnt < n)
{
*(dest + cnt) = *(src + cnt);
cnt++;
}

return (dest);
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

created_dog->name = malloc(sizeof(name));
if (!created_dog->name)
return (NULL);

_memcpy(created_dog->name, name, sizeof(name));

created_dog->age = age;

created_dog->owner = malloc(sizeof(owner));
if (!created_dog->owner)
return (NULL);

_memcpy(created_dog->owner, owner, sizeof(owner));

return (created_dog);
}
