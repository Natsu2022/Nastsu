#include <stdio.h> // int summation, int product, float poly2, float max
#include <math.h>  // pow(x, 2) ==or== x * x = x^2

int summation(int m, int n)
{

    // fixed in case of m > n
    if (m > n) 
    {
        int t = n;
        m = n;
        n = t;
    }

    // set summation to 0
    int summation = 0;    
    int i;
    for (i = m; i <= n; i++)
        // calculate summaton
        summation = summation + i;

    // return
    return summation;
}

int product(int m, int n) // m <= n
{
    // set product to 1
    int product = 1;
    {
        // fixed in case of m > n
        if(m > n) 
        {            
            int t = m;
            m = n;
            n = t;
        }
    }

    
    int i;
    for (i = m; i <= n; i ++)
        // calculate product
        product = product * i;

    // return product
    return product;
}

float poly2(float a2, float a1, float a0, float x)
{
    //    y = a2 *    x^2    + a1 * x^1 + a0 * x^0
    float y = a2 * pow(x, 2) + a1 * x + a0;

    return y;
}

float maxFloat(float data[], int n)
{
    if (n < 1) // Protect my function with error!!!
    {
        printf("!!!ERROR: NUMBER OF ELEMENT!!!\n");
        return -1,0;
    }
    // pick first value is maximum
    float max = data[0]; // The first data 

    // scan from index 1 to index n - 1
    // i < n   == or ==   i <= n-1
    int i;
    // i <= n-1, last value of i is n-1
    // i < n, last value of i is n-1
    for (i = 1 ; i <= n-1 ; i ++) // or (i = 1 ; i < n ; i ++)
    {
        // check max < data[i]?
        if (max < data[i])
             // keep new data[i] as maximum value
            max = data[i];
    }

    // return maximun
    return max;

}

/*void(int m, int n)
{
    if()
}*/

int main()
{
    // *summation testing
    int m , n ;
    printf("ENTER: "); scanf("%d", &m);
    printf("ENTER: "); scanf("%d", &n);
    printf("\nTesting A \"Summation()\" function\n\n");
    printf("Summation(%d, %d), is %d\n", m, n, summation(m,n));
    printf("Summation(%d, %d), is %d\n", n, m, summation(m,n));

    // *product testing
    m;
    n;
    printf("\nTesting B \"Product()\" function\n");
    printf("Product(%d, %d), is %d\n", m, n, product(m, n));
    printf("Product(%d, %d), is %d\n", n, m, product(m, n));

    // *poly2 testing  
    printf("\nTesting C \"poly2()\" function\n");
    printf("Poly(2, 3, 5, 8), is %0.2f\n", poly2(2, 3, 5, 8));

    // *maxFloat testing
    printf("\nTesting D \"maxFloat()\" function\n");
    float data[] = {12, 33, 20};
    printf("MaxFloat(12, 33, 20), is %0.2f\n", maxFloat(data, 3));
    printf("MaxFloat(12, 33), is %0.2f\n", maxFloat(data, 2));
    printf("MaxFloat(12), is %0.2f\n", maxFloat(data, 1));
    printf("MaxFloat(), is %0.2f\n", maxFloat(data, 0));
    
    return 0;
}