#include <stdio.h>

int main () {
    float rate, dollar, bath;
    
    printf("Enter rate: "); scanf("%f", &rate);
    printf("Enter dollar: "); scanf("%f", &dollar);

    //calculate 
    bath = rate * dollar ;

    printf("Rate: %0.2f bath/dollar\n", rate);
    printf("dollar: %0.2f dollar\n", dollar);
    printf("Bath: %0.2f bath\n", bath);

    return 0;

}