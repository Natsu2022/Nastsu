#include <stdio.h>
#include <math.h>

int main () 
{
    
    float width, height, depth, radius;
    float redArea, greenArea, yellowArea, pinkArea;
    float area;
    float volume;

    printf("Enter width: "); scanf("%f", &width);
    printf("Enter height: "); scanf("%f", &height);
    printf("Enter depth: "); scanf("%f", &depth);
    printf("Enter radius: "); scanf("%f", &radius);

    //calculate all area
    redArea = width * depth;
    greenArea = depth * height;
    yellowArea = height * width - M_PI * radius * radius;
    pinkArea = 2.0f * M_PI * radius * depth;
    area = 2.0f * redArea +
               2.0f * greenArea +
               2.0f * yellowArea +
               2.0f * pinkArea;

    //calculate volume
    volume = width * height * depth - M_PI * radius * radius * depth;

    //Output display
    printf("Width:%0.2f unit\n",width);
    printf("Height:%0.2f unit\n",height);
    printf("depth:%0.2f unit\n",depth);
    printf("Radius:%0.2f unit\n",radius);
    printf("Area:%0.2f unit\n",area);
    printf("Volume:%0.2f unit\n",volume);
    
    return 0;
}