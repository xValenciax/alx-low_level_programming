#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 1 (failure)
 */

int main(void)
{
char *arg1 = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(1, arg1, 59);
return (1);
}
