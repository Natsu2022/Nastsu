#include <stdio.h>

int main () {
    // integer: char, int, long int
    // floatingpoint: float, double

    // char (8-bit), ASCII (7-bit)
    // single-quote ' -> charater
    // double-quote " -> string
    char aCharater = 'a'; //dec: 97, hex: 61
    aCharater = 98;   // b
    aCharater = 0x63; // c

    char newLine = '\n'; // 13(CR, Carrier return)

    char someChar = '\13';
    someChar = 13;

    // '' back-slash, "excape key" 

    printf("aCharater: %d\n", aCharater); // decimal 97
    printf("aCharater: %x\n", aCharater); // hexa-decimal 61
    printf("aCharater: %c\n", aCharater); // charater c

    printf("Bell: %c\n", '\a');  // RUN แล้วจะมเสียง 

    //printf("This is the testing massage \r"); // \r คือ ขึ้นบรรทัดใหม่
    //scanf("%d, &temp");

    //printf("This is the testing massage: \r");
    //scanf("Pin said \"Hello...\" ");

    printf("Pin said \"Hello...\" \n");    // ตัวอย่าง
    printf("goto /home/pin\n");            // ตัวอย่าง
    printf("goto \\home\\pin\n");          // \\ ข้อความ \\ <= (ใส่back slash 2 ตัว)

    char massage[] = "Hello"; // append '\0' 
    char emptyString[] = "";  // append '\0'
    //char massage ต้องใส[] บอกว่าเป็นตังหนังสือหลายตัว
    
    printf("hello...\n");
    printf("%s...\n", massage); //บอกให้เอา massageมาโผล่
    printf("This is emply string: %s\n", emptyString);

    char firstStr[] = "Computer";
    char secondStr[] = "Engineering"; // size = 12 ขนาด Byte, string lenght = 11 ตวามยาวที่เราเห็นตัวหนังสือ

    printf("%s %s\n", firstStr, secondStr);

    printf("Hello mother fucker \n"
           "surprice mother fucker \n"
           "surprice mother father \n");

    

    printf("secondStr size: %d\n", (int)sizeof(secondStr)); // 12
    printf("secondStr length: %dn", (int)strlen(secondStr)); // 11
    
    int sum = 0; // 0
    int anotherSum = 0;

    const float myPi = 3.14f; //  ถ้ามี const จะไม่สามารถ เปลี่ยนค่ามันได้ ใช่ค่าคงที่ทั้งโปรแกรมนี้


    sum = sum + 1; // 1
    sum = sum + 1; // 0

    anotherSum = 1.f + 2.f * 3.f / 4.f - 2.f; // value = 0.5

    //           ( 1 + (( 2 * 3 ) / 4 ) ) - 2 = 0.5  ***คูณ หาร สำคัญสุด***

    printf("value is %f\n, value");

    int  a= 10, b = 10;    

    printf("a++ is %d\n", a++);         
    printf("++b is %d\n", ++b);         

    printf("a = %d, b = %d", a, b); 

    int c = a++;  // c = 11
    int d = ++b;  // d = 12


    int e = a++ + b; // a++             nary (one operand)
     
                     // () + b          binary operator (two operand)

    return 0;

}