#include <stdio.h>

// Function
void sayHi(char name[], int age){
    printf("Hello %s, you are %d years old.\n", name, age);
}

// Function with Return Statement
double cube(double num){
    double result = num * num * num;
    return result;
}

// If Statement in a function called Max to find the maximum value
// Practice other logical operators too as well while this program below is only based on if, else if and else statement alone.
int max(int num1, int num2){
    int result;
    if(num1 > num2){
        result = num1;
    } else{
        result = num2;
    }
    return result;
}

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
    printf("%d", max(4, 10));

    return 0;
}

