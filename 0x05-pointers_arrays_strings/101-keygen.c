#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
  srand(time(NULL));
  unsigned int random_key = rand();

  printf("%d\n", random_key);
  return 0;
}

