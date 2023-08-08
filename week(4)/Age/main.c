/*
      block comment 
      This program is  used for ...
      Input: ...
      Output: ...
      Process: ...      

*/

#include <stdio.h> // standard input and output

int main() {
    float age;

    //INPUT age 0-100
    printf("Enter age [0-100]: \n");
    scanf("%f", &age);

    // if - else if - else
    if (age < 3) //น้อยกว่า3 0-2 ขวบ
        printf("You are baby\n"); //น้อน
    else if (age < 10) //น้องกว่า10 3-9 ขวบ
        printf("You are kid\n"); //เด็กน้อย
    else if (age < 20) //น้อยกว่า20 10-19 ขวบ
        printf("You are teenager\n"); //ยังสาวยัง / หนุ่น 
    else if (age < 50) //น้อยกว่า50 20-49 ขวบ
        printf("You are adult\n"); //ผู้ใหญ่หรือรุ่นใหญ่
    else if (age < 100) //มากกว่า50ขึ้นไป 50-100ขวบ
        printf("You are elder\n"); //บอกว่าเฒ่าแล้า


    return 0; //return with on error

}