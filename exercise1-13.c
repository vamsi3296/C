

//   Exercise1-13.c  ///
// Comments are also printed in the output. Other =
#include <stdio.h>

#define HIST '|'

main()
{
    int /*c,*/ i, j, nwhite, nother;
    int ndigit[10];
    char word[10][20];
    char c;

    nwhite = nother = 0;
    for (i = 0; i < 5; ++i)
    {
        for (j = 0;j < 20; ++j)
            word[i][j] = ' ';
    }
    i = 0;
    j = -1;
        while ((c = getchar()) != EOF)
        {
            if (c == ' ' || c == '\n' || c == '\t')
                {
                    printf(" empty char\n");
                    word[i][++j] = ' ';
                    ++i;
                    ++nwhite;
                }
            else 
            {
                word[i][++j] = c;
                ++nother;
            }

        }

        printf("\nWord = ");
        for (i=0;i < 5; ++i)
        {
            for (j = 0; j < 20; ++j)
            {
                printf("%c", word[i][j]);
            }
        }
}
