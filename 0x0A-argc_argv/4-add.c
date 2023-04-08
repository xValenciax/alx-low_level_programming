#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
int i = 1, j = 1, sum = 0, flag = 1;

for (; j < argc && flag; j++)
if (argv[j][0] >= '0' && argv[j][0] <= '9')
flag = 0;


if (argc == 1 || flag)
{
printf("%d\n", sum);
return (0);
}

for (; i < argc; i++)
{
for (j = 0; j < (int)strlen(argv[i]); j++)
{
if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[i]);
}

printf("%d\n", sum);

exit(EXIT_SUCCESS);
}
