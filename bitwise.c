    /// Learning bitwise operators

#include <stdio.h>

    // getbits: get n bits from position p
unsigned getbits(unsigned x, int p, int n)
{
    return (x >> (p+1-n))  & ~(~0 << n);  
}

main()
{
    unsigned x = 0007;
    x = x & 0177 ;
    unsigned k = getbits(x, 3, 3);
    printf("x in dec = %d\t x in octal = %o\ndec = %u\toctal = %o\n", x, x, k, k);
    printf("dec= %u\t octal = %o\n", getbits(x,4,3), getbits(x, 4, 3));
}
