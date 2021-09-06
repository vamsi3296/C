

    // 1.5 File Copying

#include <stdio.h>

// Copy input to output; 1st version

/*main()
{
    int c;

    c = getchar();
    while (c != EOF)
    {
        putchar(c);
        c = getchar();
    }
}*/

// Copy input to output; 2nd version

main()
{
    int c;

    while ((c = getchar()) != EOF )
        putchar(c);
}
