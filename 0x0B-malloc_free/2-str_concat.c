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
int final_length = 0;

while (s1 != NULL && *(s1 + s1Len) != '\0')
s1Len++;
while (s2 != NULL && *(s2 + s2Len) != '\0')
s2Len++;

if (s1 == NULL)
final_length = s2Len;

else if (s2 == NULL)
final_length = s1Len;

else
final_length = s1Len + s2Len;

concat = malloc((final_length *sizeof(*concat)) + 1);

if (concat == NULL)
return (NULL);

for (; i < final_length; i++)
{
if (i < s1Len)
concat[i] = *(s1 + i);

else
concat[i] = *(s2 + j), j++;
}
concat[final_length] = '\0';
return (concat);
}
