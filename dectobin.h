    // Return binary of a decimal

#include<stdio.h>
#include<string.h>

void dectomain(int dec)
{
  int remainder, i = 0;
  char binary[4] = {};  
  int oridec = dec;
  while (dec > 0)
  {
    //printf("Entered loop \n");
    //printf("decimal is %d\n", dec);
    remainder = dec % 2;
    dec /= 2;
    binary[i++] = remainder + '0';
    //printf(" i = %d, Binary is %c & Remainder is %d\n",i, binary[i], remainder);
  }

  char bin[4] = {};
  i = strlen(binary);
  int j = -1;
  while ( i > -1 )
  {
    //printf(" i = %d, binary[i--] = %c\n", i, binary[i]);
    bin[j++] = binary[i--];
    //printf(" j = %d, bin[j] = %c\n", j, bin[j]);
  }
  //printf("Binary is %s\n",binary);
  printf("Binary of %d = %s\n", oridec, bin);
}

