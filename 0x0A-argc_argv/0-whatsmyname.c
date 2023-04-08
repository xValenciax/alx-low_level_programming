#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * @argc: number of arguments passed to the program
 * @argv: array containing the arguments passed to the progam
 *
 * Return: Always 0 (Success)
 */

int main(__attribute__ ((unused))int argc, char *argv[])
{
printf("%s\n", *argv);
exit(EXIT_SUCCESS);
}
