#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
    char *concat;

    concat = string_nconcat(NULL, "School !!!", 3);
    printf("%s\n", concat);
    printf("%ld\n", strlen(concat));
    free(concat);
    return (0);
}
