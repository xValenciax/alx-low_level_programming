#include <stdio.h>
int main(void)
{
  int hrs = 0, mins = 0;


  while (hrs < 24){
    while(mins < 60){
      printf("%d:%d\n", hrs, mins);
      mins++;
    }
    hrs++;
    mins = 0;
  }
  return 0;
}
