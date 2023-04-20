#include "variadic_functions.h"

/**
 * sum_them_all - sums all the passed parameters
 *
 * @n: number of parameters to be passed
 *
 * Return: the summation of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
va_list operands;
unsigned int i = 0, sum = 0;

if (!n)
return (0);

va_start(operands, n);

while (i < n)
{
sum += va_arg(operands, int);
i++;
}

va_end(operands);

return (sum);
}
