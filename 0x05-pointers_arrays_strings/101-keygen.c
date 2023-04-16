#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a random key
 *
 * Return - always 0 (Success)
 */


unsigned long int key_gen();
unsigned long int calc_ckecksum(unsigned long int key);

int main()
{
  //  printf("%lu", key_gen());
  srand(time(NULL));

  printf("%lu\n", key_gen());
  return 0;
}

unsigned long int key_gen()
{
  unsigned long int key = 0, keysum = 0;
  int flag = 0, checksum = 0;

  srand(time(NULL));
  while(!flag)
    {
      key = (rand() % (122 - 97 + 1)) + 97;
      keysum += key;
      checksum = calc_ckecksum(keysum);
      if(checksum == 2772)
	flag = 1;

      if(checksum > 2772)
	keysum = 0;
    }
  return (keysum);
}

unsigned long int calc_ckecksum(unsigned long int key)
{
  unsigned long int sum = 0;

  unsigned long int tmp = key;
  
  while(tmp != 0)
    {
      sum += tmp % 10;
      tmp /= 10;
    }

  return (sum);
}
