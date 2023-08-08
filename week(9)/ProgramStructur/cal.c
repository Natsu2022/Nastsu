#include <math.h> // power
//   power(      data1,       5,       2) in main.c(file)
void power(float data1[], int n, float p)
{
    int i;
    for ( i = 0 ; i < n ; i++)
    data1[i] = pow (data1[i], p); 
}