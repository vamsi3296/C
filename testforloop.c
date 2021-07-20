// Testing for loop

#include<stdio.h>

void main()
{
    int i = 0;
    for(i; i < 10; i++)
    {
        printf("i = %d\t", i);
    }
    i = 0;
    for (i; i < 10; ++i)
    {
        printf("i = %d\t", i);
    }
}
