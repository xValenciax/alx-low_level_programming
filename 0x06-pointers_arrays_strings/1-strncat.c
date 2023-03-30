#include "main.h"

/**
 * _strncat - concatenates two strings up to n characaters
 *
 * @dest: input string to which output is saved
 * @src: input string to be apended
 * @n: maximum number of characaters to be appended
 * Return: pointer to the new dest string
 */

char *_strncat(char *dest, char *src, int n)
{
int i = 0, cnt = 0;

while (dest[i] != '\0')
i++;
while (cnt < n && *src != '\0')
{
dest[i] = *src;
src++;
i++;
cnt++;
}

dest[i] = '\0';

return (dest);

}
