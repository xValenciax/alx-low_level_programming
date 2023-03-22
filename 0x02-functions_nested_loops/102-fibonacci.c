#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0 (Success)
 */

int main(void)
{
fib_50();
return (0);
}

/**
 * fib_50 - prints the first 50 fibonacci numbers
 *
 * Return: always void
 */
void fib_50(void)
{
unsigned long int n_1 = 0, n_2 = 1;
int cnt = 1;
while (cnt <= 50)
{
unsigned long int tmp = n_1 + n_2;
if (cnt == 50)
printf("%lu", tmp);
else
printf("%lu, ", tmp);
n_1 = n_2;
n_2 = tmp;
cnt++;
}
printf("\n");
}
