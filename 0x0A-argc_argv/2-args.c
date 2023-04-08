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
int i = 0;

for (; i < argc; i++)
printf("%s\n", argv[i]);

exit(EXIT_SUCCESS);
}
