#include <stdio.h> // printf(), scanf()
#include <stdlib.h> // rand(), srand()
#include <time.h> // time()

int main()
{
    // random number of answer ( 0 - 99 )
    srand(time(NULL)); // random seed number
    int answer = rand() % 100 ; 
    printf("answer: %d\n", answer);

    int value;
    int counter = 0;
    
    // do
    for ( counter = 0 ; counter < 10 && value != answer ; counter + 1 )
    {
        // enter value ( 0 - 99 )
        printf("[ %2d]Enter value ( 0 - 99 ): ", ++counter );
        scanf ("%d", &value);

        // counter = counter + 1 ;
        
        // check value and answer
           // value < answer -> display smaller
           if (answer > value)
              printf("Your value is smaller\n");
           // value > answer -> display bigger
           else if(answer < value)
              printf("Your value is bigger\n");
           // value == answer -> display correct
           else 
              printf("correct\n");

    } 

    // check you win or lose
    if (value == answer)
       printf("You win");
    else 
       printf("you lose");
    
    return 0;
}
