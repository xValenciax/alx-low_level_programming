#include "main.h"

/**
 * _strstr - locates a substring in a given string
 *
 * @haystack: input string to search in
 * @needle: substring to search for
 *
 * Return: a pointer to the beggining of the substring if found
 * or NULL if not found
 */


char *_strstr(char *haystack, char *needle)
{
int i = 0, j = 0, tmpI = 0;

while (haystack[i] != '\0')
{

while (haystack[tmpI] == needle[j] && needle[j] != '\0')
{
j++;
tmpI++;
}

if (needle[j] == '\0')
return (haystack + i);

i++;
tmpI = i;
j = 0;
}
return ('\0');
}
