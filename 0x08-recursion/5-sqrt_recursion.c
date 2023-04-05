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
int binary_search(int s, int e, int num)
{
int mid;
 
if (s > e)
  return -1;

mid = (s + e) / 2;

if ((mid * mid) == num)
return (mid);

else if ((mid * mid) > num)
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
return (binary_search(1, n, n));
}
