#include "main.h"

/**
 * check_palindrome - checks for equality in a string and its reverse
 *
 * @l: start of string
 * @r: end of string
 * @s: input string
 *
 * Return: 1 if both are equal, 0 otherwise
 */

int check_palindrome(int l, int r, char *s)
{
if (*(s + l) != *(s + r))
return (0);

if (l > r)
return (1);

return (check_palindrome(l + 1, r - 1, s));
}

/**
 * is_palindrome - checks if string reads the same reversed (palindrome string)
 *
 * @s: input string
 *
 * Return: 1 if string is palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
int i = strlen(s);

i--;

return (check_palindrome(0, i, s));
}
