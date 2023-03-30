#include "main.h"

/**
 * _strncpy - copies a string into another string up to n chars maximum
 *
 * @dest: string where content is to be copied
 * @src: string to be copied
 * @n: maximum number of chars to be copied
 *
 * Return: returns a pointer at string dest after copying
 */

char *_strncpy(char *dest, char *src, int n)
{
int i = 0;

while (i < n && *src != '\0')
{
dest[i] = *src;
i++;
src++;
}

while (i < n)
{
dest[i] = '\0';
i++;
}

return (dest);
}
