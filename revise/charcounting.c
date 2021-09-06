

    // 1.5.2 Character Counting - pg no. 17

#include <stdio.h>

// Count characters in input; 1st version

/*main()
{
    long nc;

    nc = 0;
    while (getchar() != EOF)
        ++nc;
    printf("%ld\n", nc);
}*/

main()
{
    double nc;

    for (nc = 0; getchar() != EOF; ++nc)
        ;
    printf("%.0f\n", nc);
}
