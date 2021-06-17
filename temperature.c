#include <stdio.h>

// Symbolic Constants
#define LOWER 0 // lower limit of table
#define UPPER 300  //upper limit of table
#define STEP 20  //Step size

/* Print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300 */

main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0; //lower limit of temperature table
    upper = 300; //upper limit
    step = 20; //Step size

    fahr = lower;
    printf("\t\t\t----Fahrenheit - Clesius table----\t\t\t\n");
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

    celsius = lower;
    printf("\t\t\t----Celsius - Fahrenheit table----\t\t\t\n");

    while(celsius <= upper) {
        fahr = (9.0/5.0) * (celsius + 32.0);
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }

    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf("%3f %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
