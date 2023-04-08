#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry point
 *
 * @argc: number of arguments passed to the program
 * @argv: arguments passed the program
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
int i = 1, sum = 0;

if (argc == 1)
{
printf("Error\n");
return (1);
}

for (; i < argc; i++)
{
if ((argv[i][0] >= 'a' && argv[i][0] <= 'z') ||
(argv[i][0] >= 'A' && argv[i][0] <= 'Z'))
{
printf("Error\n");
return (1);
}

else
sum += atoi(argv[i]);
}

printf("%d\n", sum);

exit(EXIT_SUCCESS);
}
