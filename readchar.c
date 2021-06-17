#include <stdio.h>

/* copy input to output; 1st version */

main()
{
    int c;
    char value;
    value = ((c = getchar()) != EOF);
    printf("%i\n", value);
    return 0;
}
