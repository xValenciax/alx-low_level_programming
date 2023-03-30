#include "main.h"

/**
 * string_toupper - converts a string into uppercase
 *
 * @s: string to be converted
 *
 * Return: pointer to converted string
 */


char *string_toupper(char *s)
{
int i = 0;

while (*(s + i) != '\0')
{
if (s[i] >= 'a' && s[i] <= 'z')
*(s + i) = (*(s + i) - 'a') + 'A';
i++;
}
return (s);
}
