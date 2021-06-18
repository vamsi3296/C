    //// Implementing htpi(s)

#include <stdio.h>
#include <ctype.h>

enum hdx { a = 10, b, c, d, e, f};

char hexadec[] = "0xffff";
char hexadec1[] = "0X00FF";

main()
{
    int i = 0;
    enum hdx digi = f;
    while (hexadec1[i] != '\0')
    {
        //printf("hexadec[i] before conv = %c\n", hexadec1[i]);
        hexadec1[i] = tolower(hexadec1[i]);
        //printf("hexadec[i] after conv = %c\n", hexadec1[i]);
        ++i;
    }

    while (i > 0)
    {
        hexadeci[i]
    }
    printf("%d", digi);
}
