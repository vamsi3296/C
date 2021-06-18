/// Testing various things

#include <stdio.h>

main()
{
    int n, i;
    char c = '_';
    for ( i = 48; i < 100; ++i)
    {
        n = i - '0';
        printf("%c value is = %d\n\a", i, n);
    }
}
