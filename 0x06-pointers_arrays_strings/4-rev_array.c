#include "main.h"

/**
 */

void reverse_array(int *a, int n)
{
  int left, right, tmp, tmp2;

  left = 0, right = n-1;

  while (left != right)
    {
      tmp = a[left];
      tmp2 = a[right];

      a[left] = tmp2;
      a[right] = tmp;

      left++, right--;
    }
}
