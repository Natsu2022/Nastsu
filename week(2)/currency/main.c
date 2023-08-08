/*
      block comment 
      This program is  used for ...
      Input: ...
      Output: ...
      Process: ...      

*/

#include <stdio.h> // standard input and output

int main() {
    // variables
    float rate, dollar, bath;

    //input rate, dollar from keyboard
    printf("Enter rate: "); scanf("%f", &rate);
    printf("Enter dollar: "); scanf("%f", &dollar);

    //calculate bath, here!!!
    bath = rate * dollar ;

    //display output
    printf("Rate: %0.2f Bath/US Dollar\n", rate);
    printf("Dollar: %0.2f US Dollar\n", dollar);
    printf("Bath: %0.2f Bath\n", bath);
    return 0; //return with on error

}