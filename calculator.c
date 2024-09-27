#include <stdio.h>
#include <stdlib.h>

int main(){

    double num1;
    double num2;
    char op;

    printf("Enter a number: ");
    scanf("%lf", &num1);
    printf("Enter operator: ");
    scanf(" %c", &op);              // Always pay attention to the character identifier, a space must be after the first quote
    printf("Enter a number: ");
    scanf("%lf", &num2);

    if(op == '+'){
        printf("%f", num1 + num2);
    } else if(op == '-'){           // Always pay attention to using single quote for character signs, it won't work if double quote are used.
        printf("%f", num1 + num2);
    } else if(op == '/'){
        printf("%f", num1 / num2);
    } else if(op == '*'){
        printf("%f", num1 * num2);
    } else {
        printf("You entered a wrong operator !");
    }

    return 0;
}