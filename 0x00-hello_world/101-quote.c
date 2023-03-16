#include <unistd.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
char *prog = "echo";
char *arg1 = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
execlp(prog, prog, arg1, NULL);
return (1);
}
