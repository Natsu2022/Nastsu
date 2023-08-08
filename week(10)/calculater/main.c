#include <stdio.h>
#include <stdlib.h> // atof(str)
#include <string.h> // strcmp(s1, s2)
#include <math.h>   // power, M_PI

// Function
float addFunction(float operand1, float operand2)
{
    return operand1 + operand2; 
}
float subFunction(float operand1, float operand2)
{
    return operand1 - operand2; 
}
float mulFunction(float operand1, float operand2)
{
    return operand1 * operand2; 
}
float divFunction(float operand1, float operand2)
{
    return operand1 / operand2; 
}
float powFunction(float operand1, float operand2)
{
    return pow(operand1 , operand2); 
}

int main (int argc, char *argv[]) 
{
    // check argument counter (argc) must equal to four
    if (argc != 4) // Your operand is not != 4 (EX Cal.exe pow 12) 
    {
    printf("!!! ERROR !!!\nTry again(EX Cal.exe pow 12 2)\n");
    return -1;// abnormal terminate
    }
    // argv[0]     argv[i]    argv[2]    argv[3]
    // calculator <operator> <operand1> <operand2>
    // ***mean that argc is equal to four
    // argv[1] => "add", "sub", abc...
    //    <operater> in {add, sub, mul, div, pow}
    //      argv[1]
    if (strcmp(argv[1], "add") != 0 && 
     strcmp(argv[1], "sub") != 0 &&
     strcmp(argv[1], "mul") != 0 &&
     strcmp(argv[1], "div") != 0 &&
     strcmp(argv[1], "pow") != 0 )
    {
        // *** "abc"
    printf("!! ERROR !!\nCheck your Operator\n"); 
    return -2;
    }

    //     argv[0]   [1]     [2]     [3]    [4]
    // *** calculate add   "12.34" "56.76" result (string)
    float operand1 = atof(argv[2]); // (atof) #include <stdlib.h>
    float operand2 = atof(argv[3]); // (atof) #include <stdlib.h>
    float result = atof(argv[4]);   // (atof) #include <stdlib.h>

    // check operator (calling function)
    if (strcmp(argv[1], "add") == 0) 
    {
        // Float operand1 = atof(argv[2]); {55}
        // float operand2 = atof(argv[3]); {56}
        float result = addFunction(operand1, operand2); 
        printf("Calculate: %0.2f + %0.2f\n", operand1, operand2);
        printf("Result: %0.2f\n", result); // float result = atof(argv[4]); {57}
    }
    else if (strcmp(argv[1], "sub") == 0)
    {
        // Float operand1 = atof(argv[2]); {55}
        // float operand2 = atof(argv[3]); {56}
        float result = subFunction(operand1, operand2);
        printf("Calculate: %0.2f - %0.2f\n", operand1, operand2);
        printf("Result: %0.2f\n", result); // float result = atof(argv[4]); {57}
    }
    else if (strcmp(argv[1], "mul") == 0)
    {
        // Float operand1 = atof(argv[2]); {55}
        // float operand2 = atof(argv[3]); {56}
        float result = mulFunction(operand1, operand2);
        printf("Calculate: %0.2f x %0.2f\n", operand1, operand2);
        printf("Result: %0.2f\n", result); // float result = atof(argv[4]); {57} 
    }
    else if (strcmp(argv[1], "div") == 0)
    {
        // Float operand1 = atof(argv[2]); {55}
        // float operand2 = atof(argv[3]); {56}
        float result = divFunction(operand1, operand2);
        printf("Calculate: %0.2f / %0.2f\n", operand1, operand2);
        printf("Result: %0.2f\n", result); // float result = atof(argv[4]); {57}
    }
    else
    {
        // Float operand1 = atof(argv[2]); {55}
        // float operand2 = atof(argv[3]); {56}
        float result = powFunction(operand1, operand2);
        printf("Calculate: %0.2f ^ %0.2f\n", operand1, operand2);
        printf("Result: %0.2f\n", result); // float result = atof(argv[4]); {57}
        // We can use negative number in my function EX: pow 2 -2 = 0.25 ! SUCESS !
    }

    printf("WE DID IT!!!!!!!!!!!\n");
    return 0;
}