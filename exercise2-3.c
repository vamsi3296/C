    //// Implementing htpi(s)

#include <stdio.h>
#include <ctype.h>


char hexadec[] = "0xffff";
char hexadec1[] = "0XFFFF";

int hextodecconv(char);
main()
{
    int i = 0, mul, hdxtodec, result;
    while (hexadec1[i] != '\0')
    {
        hexadec1[i] = tolower(hexadec1[i]);
        ++i;
    } 
    
    while (--i > 1)
    {
        if ( hexadec1[i] >= 'a' && hexadec1[i] <= 'f')
            hdxtodec = hextodecconv(hexadec1[i]);
        else
            hdxtodec = hexadec1[i] - 48; // hexadec1[i] = 'a' which is 58 value 

        result = result + (hdxtodec * mypow(16, (5 - i)));
        //printf("i = %i,\thexadec1[i] = %c, hdxtodec = %d,\t result = %i\n", i, hexadec1[i], hdxtodec, result); 
    }
    printf("%d\n", result);
}

int mypow(int base, int exp)
{
    int num = 1, i = 0;
    while ( i < exp )
        {
            num = num * base;
            ++i;
        }
    return num;
}

int hextodecconv(char c)
{
    int a = 9;
    char i = 'a';
    for ( i; i <= c; ++i )   // If less than the sent char
            ++a;        // increment the val

    return a;
}
