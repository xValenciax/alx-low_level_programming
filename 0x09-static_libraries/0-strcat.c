#include "main.h"

/**
 * _strcat - concatenates two strings together
 *
 * @dest: input string where ouput is gonna be saved
 * @src: input string that's gonna be concatenated
 *
 * Return: a pointer to char pointed to string dest
 */

char *_strcat(char *dest, char *src)
{
int i = 0;

while (dest[i] != '\0')
i++;

while (*src != '\0')
{
dest[i] = *src;
src++;
i++;
}

dest[i] = '\0';

return (dest);
}
