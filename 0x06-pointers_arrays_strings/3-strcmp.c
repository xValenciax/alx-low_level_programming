#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: first input string
 * @s2: second input string
 *
 * Return: an integer > 0 if s1 is greater than s2
 * < 0 if s1 is less than s2
 * or 0 if s1 equals s2
 */

int _strcmp(char *s1, char *s2)
{
int i = 0;

while (*(s1 + i) == *(s2 + i) && *(s1 + i) != '\0')
i++;

return (*(s1 + i)-*(s2 + i));
}
