    //bitcount

#include<stdio.h>
#include "dectobin.h"

    // bitcount: count 1 bits in x
int bitcount(unsigned x)
{
  int b;

  for (b = 0; x != 0; x >>= 1)
  {
    printf("Value of x is %d\n", x);
    if ( x & 01 )
    {
      b++;
      printf("The value of b is %d\n", b);
    }
  }
  return b;
}

int main()
{
  int k;
  dectomain(11);
  k = bitcount(11);
  printf("Returned value is %d\n", k);
}
