#include "main.h"

/**
 * calc_str_len - calculates the length of a string
 *
 * @str: string input
 *
 * Return: the length of string str
 */

unsigned int calc_str_len(char *str)
{
int i = 0;

while (str != NULL && *(str + i) != '\0')
i++;

i = str == NULL ? i : i - 1;

return (i);
}

/**
 * string_nconcat - concatenates two strings up to n bytes of the 2nd string
 *
 * @s1: first string to get concatenated
 * @s2: second string to get concatenated
 * @n: number of bytes to concatenate from the 2nd string
 *
 * Return: pointer to the newly allocated string, or NULL in case of failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int maxLen = 0, i = 0, j = 0, len = calc_str_len(s1);
char *ptr;

if (s1 == NULL)
maxLen = n;

else if (s2 == NULL)
maxLen = len, n = 0;

else if (s1 == NULL && s2 == NULL)
return (NULL);

else
maxLen = len + n;

ptr = malloc(maxLen + 1);

if (ptr == NULL)
return (NULL);

for (; i < maxLen; i++)
{
if (i < len)
ptr[i] = *(s1 + i);

else
{
ptr[i] = *(s2 + j);
j++;
}
}

ptr[i] = '\0';

return (ptr);
}
