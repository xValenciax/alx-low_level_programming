#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: input string
 * @accept: list of character to check on
 *
 * Return: number of bytes of initial segment containing bytes from accept
 * in the original string
 */

unsigned int _strspn(char *s, char *accept)
{
int Ocnt = 0, Pcnt = 0, valid = 0;

while (*(s + Ocnt) != '\0')
{
valid = 0, Pcnt = 0;
while (*(accept + Pcnt) != '\0' && !valid)
{
if (*(accept + Pcnt) == *(s + Ocnt))
valid = 1;
Pcnt++;
}

if (!valid)
return (Ocnt);

Ocnt++;
}
return (Ocnt);
}
