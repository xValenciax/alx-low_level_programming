#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
even_liber_acci();
return (0);
}

/**
 * even_liber_acci - prints the sum of even fibonacci number less than 4 Mil
 *
 * Return: Always void
 */
void even_liber_acci(void)
{
unsigned long int n_1 = 0, n_2 = 1;
unsigned long int tmp = n_1 + n_2, sum = 0;
while (tmp <= 4000000)
{
if (tmp % 2 == 0)
sum += tmp;
n_1 = n_2;
n_2 = tmp;
tmp = n_1 + n_2;
}
printf("%lu\n", sum);
}
