#include <stdio.h>

main()
{
    int c, nl, bl, tb;

    nl = 0;
    bl = 0;
    tb = 0;
    while ((c = getchar()) != EOF)
        if (c == '\n')
            ++nl;
        else if (c == '\t')
            ++tb;
        else if (c == ' ')
            ++bl;
    printf("\n newlines = %d, blanks = %d, tabs = %d\n", nl, bl, tb);
}
