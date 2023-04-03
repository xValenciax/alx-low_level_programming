#include "main.h"

/**
 * _memcpy - copies memory bytes from one area to another
 *
 * @dest: destination memory area
 * @src: source memory area
 * @n: number of bytes to be copied
 *
 * Return: pointer to dest area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int cnt = 0;

while (cnt < n)
{
*(dest + cnt) = *(src + cnt);
cnt++;
}

return (dest);
}
