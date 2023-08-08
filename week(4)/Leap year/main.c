#include <stdio.h>

int main () {
    /*
         printf("5 / 3: %d\n", 5 / 3);
         printf("5 %% 3: %d\n", 5 % 3); //%% = modulo or mod
         printf("57 %% 4: %d\n", 57 % 4);
         printf("2563 %% 4: %d\n", 2563 % 4); // 640 3/4
    */
    
    int beYear;

    //get BE year from user by keyboard
    printf("Enter Be year: ");
    scanf("%d", &beYear);
    
    // checking, Is beYear in between 2500 and 2600 //กำหนดให้อยู่ในช่วงเวลานี้
    if (beYear >= 2500 && beYear <= 2600) { 

        // calculateคำนวน remainingที่เหลือ of last be year
        const int lastBeYear = 2563; //ปีล่าสุดที่เป็นปีอธิกสุรทิน
        const int remainLastBeYear = lastBeYear % 4; // 3

        // calculateคำนวน remainingที่เหลือ of user be year
        int remainBeYear = beYear % 4; // 0, 1, 2, 3

        // comparegเปรียบเทียบ remainingที่เหลือ values : เปรียบเทียบตัวแปลที่เหลียอยู่
        if (remainBeYear == remainLastBeYear) {   
            // true, equal, show display ieap year         
            printf("%d is \"LEAP YEAR\"\n", beYear);
        } 

        // not equalเท่ากัน 
        else {
            // false, not equal, show display not leap year 
            printf("%d is \"NOT LEAP YEAR\"\n", beYear);      
        }

    }

    // out bound
    else  {
        printf("Please enter BE year between 2500 and 2600\n"); //ถ้าใส่จำนวนปีเกิน2500-2600 จะ RUN และ แสดงบรรทัดนี้
    }



    return 0;
}