#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all digits less than 10
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int digit;

digit = 0;

while (digit < 10)
{
printf("%d", digit);
digit++;
}
printf("\n");
return (0);
}
