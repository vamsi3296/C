
    // Assignment Operators and Expressions

#include <stdio.h>

int bitcount(unsigned x)
{
    int b;

    printf("X value is %d\n", x);
    for (b = 0; x != 0; x >>= 1)
    {
        printf("X val after entering the loop %d\n", x);
        if ( x & 01)
        {
            b++;
            printf("b value is %d\n", b);
        }
    }
    return b;
}

void main()
{
    int r;
    r = bitcount(11);
    printf("result is %d\n", r);
}

