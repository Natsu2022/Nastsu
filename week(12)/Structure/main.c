#include <stdio.h>

// global
typedef struct {  float x ; float y ; } Point;
typedef struct { Point p1 ; Point p2 ; } Line;
typedef struct { float m ; float c ; } Equation;

Point makePoint( float x, float y)
{
    Point p = {x, y};
    return p;
}
float lineSlop(Line l) 
{ 
    // calculate delta x
    float deltaX = l.p2.x - l.p1.x;

    // calculate delta y
    float deltaY = l.p2.y - l.p1.y;

    // calculate slop m
    float m = deltaY / deltaX;

    // return slop m
    return m;
}
Equation lineEquation(Line l) 
{
    // calculate slop m
    float m = lineSlop(l);

    //calculate y-axis cross c, pick Point p1 
    float c = l.p1.y - m * l.p1.x;

    // return Equation (m, c)
    Equation eq = {m, c};
    return eq;
}
Equation perpendicular(Line l) 
{
    // convert from Line l to Equation L1
    Equation L1 = lineEquation(l);

    //calculate slop m2, m2 = -1 / m1 ***สมากาล***
    float m2 = 1.0f / L1.m;

    // calculate y-axis cross c2 ***จุดตัด ของLine กับ แกน Y***
    float c2 = 0;

    // return Equation L2 (m2, c2) 
    Equation L2 = { m2, c2 };
    return L2;
}

int main()
{
    // test makePoint
    printf("test makePoint\n");
    Point p1 = {10,10};
    Point p2 = {20,20};
    printf("p1 = { %0.2f , %0.2f }\n", p1);
    printf("p2 = { %0.2f , %0.2f }\n", p2);

    // test lineSlop
    printf("\nTesting lineslop\n");
    Line lPos = {{ 10 , 10 } , { 20 , 20 }}; // slop -1
    Line lNeg = {{ 0 , 0 } , { 10 , -30 }};  // slop -3
    Line lZero = {{ 10 , 5 } , { 20 , 5 }};  // slop 0
    Line lInf = {{ 20 , 7 } , { 20 , 20 }};  // slop inf
    float slPos = lineSlop(lPos);
    float slNeg = lineSlop(lNeg);
    float slZero = lineSlop(lZero);
    float slInf = lineSlop(lInf);
    printf("[Positive] p1(%0.2f,%0.2f) -> p2(%0.2f,%0.2f), slop is %0.2f\n", 
    lPos.p1.x, lPos.p1.y, lPos.p2.x, lPos.p2.y, slPos);
    printf("[Negative] p1(%0.2f,%0.2f) -> p2(%0.2f,%0.2f), slop is %0.2f\n", 
    lNeg.p1.x, lNeg.p1.y, lNeg.p2.x, lNeg.p2.y, slNeg);
    printf("[Zero] p1(%0.2f,%0.2f) -> p2(%0.2f,%0.2f), slop is %0.2f\n", 
    lZero.p1.x, lZero.p1.y, lZero.p2.x, lZero.p2.y, slZero);
    printf("[Infinity] p1(%0.2f,%0.2f) -> p2(%0.2f,%0.2f), slop is %0.2f\n", 
    lInf.p1.x, lInf.p1.y, lInf.p2.x, lInf.p2.y, slInf);



    // test lineEquation
    printf("\nTensting lineEquation()\n");
    Equation eqPos = lineEquation(lPos);
    printf("lineEquation Line [Positive] p1(%0.2f,%0.2f) -> p2(%0.2f,%0.2f), perpendicular is %0.2f\n",
    lPos.p1.x, lPos.p1.y, lPos.p2.x, lPos.p2.y, slPos);
    Equation eqNeg = lineEquation(lNeg);
    printf("lineEquation Line [Negative] p1(%0.2f,%0.2f) -> p2(%0.2f,%0.2f), perpendicular is %0.2f\n", 
    lNeg.p1.x, lNeg.p1.y, lNeg.p2.x, lNeg.p2.y, slNeg);
    Equation eqZero = lineEquation(lZero);
    printf("lineEquation Line [Zero] p1(%0.2f,%0.2f) -> p2(%0.2f,%0.2f), perpendicular is %0.2f\n", 
    lZero.p1.x, lZero.p1.y, lZero.p2.x, lZero.p2.y, slZero);
    Equation eqInf = lineEquation(lInf);
    printf("lineEquation Line [Infinitive] p1(%0.2f,%0.2f) -> p2(%0.2f,%0.2f), perpendicular is %0.2f\n", 
    lInf.p1.x, lInf.p1.y, lInf.p2.x, lInf.p2.y, slInf);


    // test perpendicular
    printf("\nTesting perpendicular\n");
    Equation lPerpenPos = perpendicular(lPos); // lPos = -3, lPerpen = 0.33..
    printf("Equation Perpendicular Line [Positive] p1 (%0.2f,%0.2f) -> p2(%0.2f,%0.2f), perpendicular equation is  \"y = %0.2fx + %0.2f\"\n", 
    lPos.p1.x, lPos.p1.y, lPos.p2.x, lPos.p2.y, lPerpenPos.m, lPerpenPos.c);
    Equation lPerpenNeg = perpendicular(lNeg); // lNeg = -3, lPerpen = 0.33..
    printf("Equation Perpendicular Line [Negative] p1 (%0.2f,%0.2f) -> p2(%0.2f,%0.2f), perpendicular equation is  \"y = %0.2fx + %0.2f\"\n", 
    lNeg.p1.x, lNeg.p1.y, lNeg.p2.x, lNeg.p2.y, lPerpenNeg.m, lPerpenNeg.c);
    Equation lPerpenZero = perpendicular(lZero); // lInf = -3, lPerpen = 0.33..
    printf("Equation Perpendicular Line [Zero] p1 (%0.2f,%0.2f) -> p2(%0.2f,%0.2f), perpendicular equation is  \"y = %0.2fx + %0.2f\"\n", 
    lZero.p1.x, lZero.p1.y, lZero.p2.x, lZero.p2.y, lPerpenZero.m, lPerpenZero.c);
    Equation lPerpenInf = perpendicular(lInf); // lInd = -3, lPerpen = 0.33..
    printf("Equation Perpendicular Line [Infinty] p1 (%0.2f,%0.2f) -> p2(%0.2f,%0.2f), perpendicular equation is  \"y = %0.2fx + %0.2f\"\n", 
    lInf.p1.x, lInf.p1.y, lInf.p2.x, lInf.p2.y, lPerpenInf.m, lPerpenInf.c);

    // return with no error
    return 0;
}