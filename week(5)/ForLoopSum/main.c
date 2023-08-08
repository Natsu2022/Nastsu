#include <stdio.h>

int main () {

    int first, last;

    // asking for first, last
    printf("Calculate summation that start from \"first\" to \"Last\"\n");
    printf("Enter first: "); scanf("%d", &first);
    printf("Enter last: "); scanf("%d", &last);

    // get minimal between a and b]
    int a;
    if (first < last)
        a = first;
    else // first >= last
        a = last;

    // get b from maximal between a and b
    // <var> = <codition> ? <true-value> : <false-value>;               !!!remember
    int b = first > last ? first : last;

    // calculate summation
    int i, sum;
    for (sum = 0, i = a ; i <= b ; i ++ ) {
        sum = sum + 2 * i;  // slower
        // sum = sum + i;
    }

    // sum = 2 * sum;
    
    //display summation
    printf("summation from %d to %d is %d\n", a, b, sum);

    return 0;
}