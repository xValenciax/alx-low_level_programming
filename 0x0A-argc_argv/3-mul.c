#include <stdio.h>
#include <stdlib.h>

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
int i = 1, res = 1;

if (argc == 1)
{
printf("Error\n");
exit(EXIT_FAILURE);
}

for (; i < argc; i++)
res *= atoi(argv[i]);

printf("%d\n", res);
exit(EXIT_SUCCESS);
}
