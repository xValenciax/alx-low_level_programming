#include "main.h"

/**
 * str_concat - concatenates two strings
 *
 * @s1: first input string
 * @s2: second input string
 *
 * Return: a pointer to a new space in memory that contains
 * the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
char *concat;
int s1Len = 0, s2Len = 0, i = 0, j = 0;
while (*(s1 + s1Len) != '\0')
s1Len++;
while (*(s2 + s2Len) != '\0')
s2Len++;
if (s1 == NULL)
{
concat = malloc((s2Len *sizeof(*concat)) + 1);
if (concat == NULL)
return (NULL);
return (concat);
}
else if (s2 == NULL)
{
concat = malloc((s1Len *sizeof(*concat)) + 1);
if (concat == NULL)
return (NULL);
return (concat);
}
concat = malloc(((s1Len + s2Len) *sizeof(*concat)) + 1);

if (concat == NULL)
return (NULL);
for (; i < (s1Len + s2Len); i++)
{
if (i < s1Len)
concat[i] = *(s1 + i);
else
concat[i] = *(s2 + j), j++;
}
concat[s1Len + s2Len] = '\0';
return (concat);
}
