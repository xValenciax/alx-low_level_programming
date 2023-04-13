#include "main.h"

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
unsigned int maxLen = 0, i = 0, j = 0, len = strlen(s1);
char *ptr;

if (s1 == NULL)
maxLen = n, len = 0;

else if (s2 == NULL)
maxLen = strlen(s1) + 1, n = 0;

else if (s1 == NULL && s2 == NULL)
return (NULL);

else
maxLen = sizeof(s1) + n + 1;

ptr = malloc(maxLen);

if (ptr == NULL)
return (NULL);

for (; i < len; i++)
ptr[i] = *(s1 + i);

for (; j < n; j++)
ptr[i] = *(s2 + j), i++;

ptr[i] = '\0';

return (ptr);
}
