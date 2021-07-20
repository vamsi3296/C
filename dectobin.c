    // Return binary of a decimal

#include<stdio.h>

void dectomain(int dec)
{
  int remainder, i = 0;
  char binary[4] = {};  
  while (dec > 0)
  {
    printf("Entered loop \n");
    printf("decimal is %d\n", dec);
    remainder = dec % 2;
    dec /= 2;
    binary[i++] = remainder + '0';
    printf(" i = %d, Binary is %c & Remainder is %d\n",i, binary[i], remainder);
  }
  printf("Final binary is %s\n",binary);
}

int main()
{
    dectomain(4);
}
