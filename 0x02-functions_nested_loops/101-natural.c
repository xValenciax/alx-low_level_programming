#include "main.h"
#include <stdio.h>
/**
 */

int main(void)
{
int sum =  sum_three_five();
printf("%d\n", sum);
return 0;
}


int sum_three_five(void)
{
int sum = 0, cnt = 1;
while (cnt <= 1024)
{
if ((cnt % 3 == 0) || (cnt % 5 == 0))
sum += cnt;
cnt++;
}
return (sum);
}
