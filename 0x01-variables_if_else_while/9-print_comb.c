#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all digits below 10 using only putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  int dig;

  dig = 48;

while (dig < 58)
{
putchar(dig);
if(dig != 57){
putchar(',');
putchar(' ');
}     
dig++;
}
putchar('\n');
return (0);
}
