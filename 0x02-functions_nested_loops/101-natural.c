#include "main.h"
#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: always 0 (Success)
 */

int main(void)
{
int sum =  sum_three_five();
printf("%d\n", sum);
return (0);
}

/**
 * sum_three_five - prints the sum of all multiples of 3 and 5
 *
 * Return: the sum of the numbers
 */
int sum_three_five(void)
{
int sum = 0, cnt = 1;
while (cnt <= 1024)
{
if ((cnt % 3 == 0) || (cnt % 5 == 0))
sum += cnt;
cnt++;
}
return (sum);
}
