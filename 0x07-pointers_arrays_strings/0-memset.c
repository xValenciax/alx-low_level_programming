#include "main.h"

/**
* _memset - fils the memory with a constant
*
* @s: memory area [array]
* @b: constant used to fill memory array
* @n: number of bytes to be filled
*
* Return: a pointer to the filled area s
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;

for (; i < n; i++)
*(s+i) = b;

return (s);
}
