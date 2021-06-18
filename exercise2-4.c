//// Alternate version of squeeze

#include <stdio.h>

void squeeze(char s[], char c[])
{
    int i, j, k;

    for (i = j = k = 0; s[i] != '\0'; i++)
        if  (s[j] != c[i])
            s[k++] = s[j];
         s[k] = '\0';
}
