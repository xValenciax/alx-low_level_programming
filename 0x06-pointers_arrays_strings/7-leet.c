#include "main.h"

/**
 * leet - encodes a string into 1337
 *
 * @s: input string to be converted
 *
 * Return: a pointer to the converted string
 */

char *leet(char *s)
{
int i = 0, j = 0;
char le[] = {'a', '4', 'e', '3', 'o', '0', 't', '7', 'l', '1', '\0'};

while (s[i] != '\0')
{
int found = 0;

while (!found && le[j] != '\0')
{
if (s[i] == le[j] || ((s[i] - 'A') + 'a' == le[j]))
s[i] = le[j + 1];
j += 2;
}
i++;
j = 0;
}
return (s);
}
