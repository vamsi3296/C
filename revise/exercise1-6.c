

    // Exercise 1-6: Verify that the expression getchar() != EOF is 0 or 1.

#include <stdio.h>

main()
{
    int c;

    //Gives you if getchar() is equal to EOF or not.

    c = (getchar() != EOF);

    printf("%i", c);
}
