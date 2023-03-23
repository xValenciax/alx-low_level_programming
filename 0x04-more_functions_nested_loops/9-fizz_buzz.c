#include "main.h"

/**
 * main - Entry point
 *
 * Return: always 0 (Success)
 */

int main(void)
{
fizz_buzz();
return (0);
}

/**
 * fizz_buzz - prints number from 1 to 100
 *
 * Description: prints number from 1 to 100
 * replacing all multiples of 3 with the word Fizz
 * and all multiples of 4 with the word Buzz
 * and all multiples of both 3 and 4 with the word FizzBuzz
 *
 * Return: always void
 */
void fizz_buzz(void)
{
int cnt = 1;

while (cnt <= 100)
{
if (cnt % (3 * 5) == 0)
printf("FizzBuzz");
else if (cnt % 3 == 0)
printf("Fizz");
else if (cnt % 5 == 0)
printf("Buzz");
else
printf("%d", cnt);
if (cnt < 100)
printf(" ");
cnt++;
}
printf("\n");
}
