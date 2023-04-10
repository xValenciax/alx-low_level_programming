#include <stdio.h>
#include <stdlib.h>

unsigned int calc_change(char *);

/**
 * main - entry point
 *
 * @argc: number of arguments passed to the program
 * @argv: an array that contains the arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
if (argc != 2)
{
printf("Error\n");
return (1);
}

if (atoi(argv[argc - 1]) < 0)
printf("0\n");

else
printf("%u\n", calc_change(argv[argc - 1]));

return (0);
}


/**
 * calc_change - calculates the min number of coins to make change
 *
 * @cent: amount of money to calculate change for
 *
 * Return: the minimum number of coins to make change
 */

unsigned int calc_change(char *cent)
{
int change = 0, cents = atoi(cent);

while (cents)
{
if (cents >= 25)
cents -= 25;

else if (cents >= 10)
cents -= 10;

else if (cents >= 5)
cents -= 5;

else if (cents >= 2)
cents -= 2;

else
cents--;

change++;
}

return (change);
}
