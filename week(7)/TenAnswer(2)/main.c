#include <stdio.h>    // printf(..), scanf(..)
#include <stdlib.h>   // rand(..), srand(..)
#include <time.h>     // time(..), NULL 

int main () 
{
    // 1. random answer
    srand(time(NULL));         // vary seed
    int answer = rand() % 100; // 100 > 0-99
    //testing
    printf("answer: %d\n", answer); //test only
    
    int counter = 0;
    int value;

    // do
    while ( counter < 10 && value != answer )
    {
        // 2. asking for "value"
        printf("[%2d]Enter Number(0 - 99):", ++counter );
        scanf("%d", &value);        

        // 3. compare "answer" and "value"
        if (value > answer) // number is bigger
        {
            printf("Your value is bigger\nLucy: YOU MISS A LOT\n\n");
        }
        else if (value < answer) //number is smaller
        {
            printf("Your value is smaller \nLucy: !!! BOOM, YOU'VE BEEN TRICKED !!!\nLucy: HA! HA! HA!\n\n");
        } 
        else // value == answer
        {
            printf("Congratulation\n");
        }

    } //while ( counter < 10 && value != answer ); // 0 (false), !=0 (true)

    // 4. check result
    
    if (value == answer) //value as answer
    {
        printf("!!! YOU WIN !!!\n");
    }    
    else // value as not equal to answer
    {
        printf("!!! YOU LOSE !!!\n\n!!! Lucy WIN !!!\nLucy:This time you pay for the moon.\nLucy:I LOVE YOU Darling. :)\n");
    }


    return 0;
}