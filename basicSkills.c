#include <stdio.h>
#include <string.h>

// Function
// void sayHi(char name[], int age){
    // printf("Hello %s, you are %d years old.\n", name, age);
// }

// Function with Return Statement
// double cube(double num){
//     double result = num * num * num;
//     return result;
// }

// If Statement in a function called Max to find the maximum value
// Practice other logical operators too as well while this program below is only based on if, else if and else statement alone.
// int max(int num1, int num2){
//     int result;
//     if(num1 > num2){
//         result = num1;
//     } else{
//         result = num2;
//     }
//     return result;
// }

// If statement with 3 parameters
// int max(int num1, int num2, int num3){
//     int result;

//     if(num1 >= num2 && num1 >= 3){
//         result = num1;
//     }else if(num2 >= num1 && num2 >= num3){
//         result = num2;
//     } else{
//         result = num3;
//     }
// }

// Struct
struct Staff{
    char name[50];
    char job[50];
    int age;
    double rankValue;
};

int main(void){
    // Basic Input from User (Numbers and Characters)
    // int age;
    // printf("Enter your age: ");
    // scanf("%d", &age);
    // printf("You are %d years old.\n", age);

    // Basic Input from User (Strings alone)
    // char name[20];
    // printf("Enter your name: ");
    // fgets() side effects too also misbehave
    // fgets(name, 20, stdin);
    // scanf("%s", name);           // Not good for taking strings of characters
    // printf("Hello %s, you are welcome.", name);


    // Basic Calculator (Change Data Type as you wish)
    // double num1, num2;
    // printf("Enter first number: ");
    // scanf("%lf", &num1);
    // printf("Enter second number: ");
    // scanf("%lf", &num2);

    // printf("Answer: %.2lf", num1 + num2);


    // MadLib Game
    // char color[20];
    // char pluralNoun[20];
    // char celebrityF[20]; // Celebrity FirstName
    // char celebrityL[20]; // Celebrity LastName

    // printf("Enter a color: ");
    // scanf("%s", color);
    // printf("Enter a plural noun: ");
    // scanf("%s", pluralNoun);
    // printf("Enter a celebrity: ");
    // scanf("%s %s", celebrityF, celebrityL);

    // printf("Roses are %s\n", color);
    // printf("%s are blue\n", pluralNoun);
    // printf("I love %s %s \n", celebrityF, celebrityL);


    // Arrays
    // int luckyNumbers[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    // printf("%d", luckyNumbers[2]);

    // Functions
    // sayHi("John", 24);       // Calling a function
    // sayHi("Amber", 22);
    // sayHi("Wolf", 24);
    // sayHi("Thompson", 20);

    // Function with return statements
    //  printf("Answer of a cube by a parameter is : %.2lf", cube(5));

    // If Statement
    // printf("%d", max(4, 10));
    // printf("%d", max(50,60,1000));
    // if(3 <2 || 2 > 5){
    //     printf("True");
    // } else{
    //     printf("False");
    // }

    // Switch Statement
    // char grade = 'A';
    
    // switch(grade){
    //     case 'A' :
    //         printf("You did great !");
    //         break;
    //     case 'B' :
    //             printf("You did good !");
    //             break;
    //     case 'C' :
    //             printf("You did nice !");
    //             break;
    //     case 'D' :
    //             printf("You did averagely !");
    //             break;
    //     case 'E' :
    //             printf("You did bad !");
    //             break;
    //     case 'F' :
    //             printf("You did fail !");
    //             break;
        
    // }


    // Struct
    // struct Staff staff1;
    // staff1.age = 24;
    // staff1.rankValue = 5.5;
    // strcpy(staff1.name, "Jim");
    // strcpy(staff1.job, "Programmer");

    // struct Staff staff2;
    // staff1.age = 22;
    // staff1.rankValue = 1.0;
    // strcpy(staff2.name, "Wolf");
    // strcpy(staff2.job, "Developer");

    // printf("%s", staff2.name);

    // While Loop
    // int index = 1;
    // while(index <= 10){
    //     printf("%d\n", index);
    //     index++;
    // }
   

   // Do While Loop
//    int indexes = 15;
//    do{
//     printf("%d\n", indexes);
//     indexes++;
//    } while(indexes <= 5);

    // For Loop
    // for(int i =1; i <= 5; i++){
    //     printf("Hello Mr. Wolfgang :  %d\n", i);
    // }

    // 2 Dimension Array and Nested Loops
    // 2 Dimension Array
    // int nums [3] [2] = {
    //     {1, 2},
    //     {3, 4},
    //     {5, 6}
    // };

    // printf("%d", nums[0][0]);

    // Nested Loops
//     int i, j;
//     for(i = 0; i < 3; i++){
//         for(j = 0; j < 2; j++){
//             printf("%d, ", nums[i][j]);
//         }
//     }

//     printf("\n");


 // Memory Address
    // int age = 24;
    // double gpa = 3.4;
    // char grade = 'A';

    // printf("age: %p\ngpa: %p\ngrade: %p", &age, &gpa, &grade);


    //  Pointers
    // int age = 30;
    // int *pAge = &age;

    // double gpa = 3.4;
    // double *pGpa = &gpa;

    // printf("age's memory address: %p\n", &age);

    // Dereferencing Pointer
    // int age = 30;
    // int *pAge = &age;

    // printf("%d", *&*&age);

    // Writing a File in C
    
    // FILE * fpointer = fopen("skills.txt", "w");
    // fprintf(fpointer, "Wolf, Programmer\nArids, Developer");


    // fclose(fpointer);

    // Reading a File in C
    char line[255];

    FILE * fpointer = fopen("skills.txt", "r");
    
    fgets(line, 255, fpointer);
    printf("%s", line); 

    fclose(fpointer);


    return 0;
}


   
