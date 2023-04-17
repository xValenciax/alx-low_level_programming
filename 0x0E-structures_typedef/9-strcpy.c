#include "main.h"

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
