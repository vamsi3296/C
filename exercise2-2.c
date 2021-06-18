#include <stdio.h>

main()
{
int i, c, lim = 1000;
char s[lim];
    for (i=0;i < lim - 1;i )
    {
        c = getchar();
        {
            if (c == EOF )
                break;
            else if (c == '\n')
                break;
        }
        s[i] = c;
        ++i;
    }
}
