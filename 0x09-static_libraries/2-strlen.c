#include "main.h"

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
