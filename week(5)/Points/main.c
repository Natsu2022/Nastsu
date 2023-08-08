#include <stdio.h>

int main () {

    // looping for get student point
    float point;
    int i; // control loop

    float min = 0.0f;
    float max = 0.0f;
    float sum = 0.0f;
    float mean = 0.0f;
    for ( i = 1 ; i <= 5 ; i = i + 1 )
    {
        //display "Enter ...point %d ", <val> related to i?
        printf("Enter student's point %d: ", i);

        //get point form keyboard
        scanf("%f", &point);
        
        // keep min value -----------------------------------------------
        // check first value?
        if (i == 1) {
            min = point;
        }
        // not the first value
        else {
            // compare min with new point
            if (point < min) {
                min = point;
            }
        }
        // --------------------------------------------------------------

        //keep max value
        if (i == 1) {
            max = point;
        }
        else {
            if (point > max) {
                max = point;
            }
        }

        // summation       
        sum = sum + point;
        
    }
    // calculate meam = summation / 5
    mean = sum / 5;
    
    //output display
    printf("Min: %0.3f, ", min);
    printf("Max: %0.3f, ", max);
    printf("Sum: %0.3f, ", sum);
    printf("Mean: %0.3f ", mean);


    return 0;
}