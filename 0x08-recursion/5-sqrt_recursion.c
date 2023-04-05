#include "main.h"

/**
 * binary_search - searches for a value in a sorted range of values recursively
 *
 * @s: start of the range
 * @e: end of the range
 * @num: value to search for
 *
 * Return: square root of num if found
 * -1 if not found
 */
int binary_search(unsigned long s, unsigned long e, unsigned long num)
{
unsigned long mid;

if (s > e)
return (-1);

mid = (s + e) / 2;

if (mid *mid == num)
return (mid);

else if ((mid *mid) > num)
return (binary_search(s, mid - 1, num));

else
return (binary_search(mid + 1, e, num));

}

/**
 * _sqrt_recursion - returns the natural square root of a number recursively
 *
 * @n: input number
 *
 * Return: square root of given number n
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);

if (n == 1)
return (1);

return (binary_search(1, (unsigned long)n / 2, (unsigned long)n));
}
