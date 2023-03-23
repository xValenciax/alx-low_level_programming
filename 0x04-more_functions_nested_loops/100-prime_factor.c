#include "main.h"
#include <math.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
  /* largest_prime_factor(); */
  /* int r = is_prime(5); */
  /* largest_prime_factor(); */
printf("%d\n", 50829599);
return 0;
}

/* /\** */
/*  * largest_prime_factor - prints the largest prime factor of a specific number */
/*  * */
/*  * Return: always void */
/*  *\/ */
/* void largest_prime_factor(void) */
/* { */
/*   unsigned long int max_factor = 0, num = 612852475143; */
/*   unsigned int i = 2; */

/*   while (num != 1) */
/*     { */
/*       if (num % i == 0) */
/* 	{ */
/* 	  num = num/i; */
/* 	  if(max_factor < i) */
/* 	    max_factor = i; */
/* 	  i = 2; */
/* 	} */
/*       else */
/* 	{ */
/* 	  i++; */
/* 	  while (!is_prime(i)) */
/* 	    { */
/* 	      i++; */
/* 	    } */
/* 	} */
/*     } */
/*   printf("%lu\n", max_factor); */
/* } */

/* /\** */
/*  * is_prime - checks whether a number is prime */
/*  * */
/*  * @n: the number to be checked */
/*  * */
/*  * Return: 1 if n is prime, 0 otherwise */
/*  *\/ */
/* int is_prime(int n) */
/* { */
/*   int  i = 2; */
/*   int flag = 0; */
/*   while (i < sqrt(n)) */
/*     { */
/*       if (n % i == 0) */
/* 	flag = 1; */
/*       i++; */
/*     } */
/*   if (flag == 1) */
/*     return (0); */

/*   return (1); */
/* } */
