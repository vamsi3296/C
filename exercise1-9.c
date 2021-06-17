#include <stdio.h>

main()
{
    int blank;
    while ((c = getchar()) != EOF){
        if (c == ' ')
        {
            ++blank;
            putchar(c);
            if (blank > 1)
            {
                putchar('\b');
                --blank;
            }
        }
        else
        {
            putchar(c);
            blank = 0;
        }
    }
}
