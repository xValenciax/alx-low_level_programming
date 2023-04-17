#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s: input string
 * @accept: set of bytes used for searching
n *
 * Return: a pointer to the byte in s that matches one
 * of the bytes in accept
 * Or NULL if no matches
 */

char *_strpbrk(char *s, char *accept)
{
int Ocnt = 0, Pcnt = 0;

while (*(s + Ocnt) != '\0')
{
Pcnt = 0;
while (*(accept + Pcnt) != '\0')
{
if (*(accept + Pcnt) == *(s + Ocnt))
return (s + Ocnt);
Pcnt++;
}

Ocnt++;
}
return ('\0');
}
