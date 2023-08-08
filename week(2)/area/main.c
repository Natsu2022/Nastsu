/*
      block comment
      This program is  used for ...
      Input: ...
      Output: ...
      Process: ...

*/

#include <stdio.h> // standard input and output
#include <math.h>  // declare M_PI

int main()
{
    // variables
    float width, height, depth, radius;
    float redArea, greenArea, purpleArea, yellowArea;
    float area;
    float volume;

    // input all variable from keyboard
    printf("Enter width: ");
    scanf("%f", &width);
    printf("Enter height: ");
    scanf("%f", &height);
    printf("Enter depht: ");
    scanf("%f", &depth);
    printf("Enter radius: ");
    scanf("%f", &radius);

    // calculate all area
    redArea = width * depth;
    greenArea = depth * height;
    purpleArea = height * width - M_PI * radius * radius;
    yellowArea = 2.0f * M_PI * radius * depth;
    area = 2.0f * redArea +
           2.0f * greenArea +
           2.0f * purpleArea +
           yellowArea;

    // calculate volume
    volume = width * height * depth - M_PI * radius * radius * depth;

    // display
    printf("Width: %0.2f unit\n", width);
    printf("Hight: %0.2f unit\n", height);
    printf("Depth: %0.2f unit\n", depth);
    printf("Radius: %0.2f unit\n", radius);
    printf("Area: %0.2f unit\n", area);
    printf("Volume: %0.2f unit\n", volume);

    return 0; // return with on error
}