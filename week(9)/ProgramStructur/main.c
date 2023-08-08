#include <stdio.h>  // < > defind by system
#include "all.h"    // " " user defind header

int main()
{
    // stat data n = (1 + 2 + 3 + 4 + 5 / n or 5)
    float data0[] = {1, 2, 3, 4, 5};
    float a = mean(data0, 5);
    printf("\n- Testing for stat function -\n");
    printf ("stat: %f\n", a);
    

    // str test toUpper() // done
    char str[] = "phumin";
    printf("\n- Testing for str function -\n");
    printf("Original string: %s\n", str); // old my name not edit 
    toUpper(str);
    printf("Upper string: %s\n", str);    // new edit my name

    // cal data1[] = {2^2, 4^2, 6^2, 8^2, 10^2}
    float data1[] = {2, 4, 6, 8, 10};
    int i;
    int counter = 2;
    printf("\n- Testing for power function -\n");
    printf("Calculate data1[] ^2\n");
    power (data1, 5, 2);

    for (i = 0 ; i < 5 ; i++)
    {
        printf("calculate (%2d) : %0.2f\n", counter++, data1[i]);
        counter = counter + 1;
    }

    return 0;
}