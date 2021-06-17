#include <stdio.h>

main()
{
    int c, nl, bl, tb;

    nl = 0;
    bl = 0;
    tb = 0;
    while ((c = getchar()) != EOF)
        if (c == '\n')
        {
            putchar('\\');
            putchar('n');
        }
        else if (c == '\t')
        {
            
            putchar('\\');
            putchar('t');
        }
        else if (c == ' ')
        {
            
            putchar('\\');
            putchar('b');
        }
        else
            putchar(c);
}
