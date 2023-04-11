#include "main.h"

/**
 * _strdup - allocates space in memory and fills it with the specified string
 *
 * @str: string to fill the allocated space with
 *
 * Return: a pointer to char to the newly created space
 */

char *_strdup(char *str)
{
char *dup;
int cnt = 0, i = 0;

if (str == NULL)
return (NULL);

while (*(str + cnt) != '\0')
cnt++;

dup = malloc(cnt *sizeof(*dup) + 1);

if (dup == NULL)
return (NULL);

for (; i < cnt; i++)
*(dup + i) = *(str + i);

return (dup);
}
