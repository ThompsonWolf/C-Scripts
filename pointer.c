#include <stdio.h>

void increment(int *p){
    *p = *p + 1;
}

int main(void){

    printf("=============================\n");    
    printf("Pointer in C\n");
    printf("=============================\n");

    // Assigning a pointer
    int i = 10;
    int *p;     // p's type is "pointer to an int", or "int-pointer"
    p = &i;     // p is assigned the address of i --p now "points to" i

    printf("%d\n", *&*p);

    // Dereferencing a Pointer
    int a;
    int *b;     // This is NOT a dereference -- this is a type "int*"

    b = &a;     // p now points to i, p holds address of i

    a = 10;     // i is now 10
    *b = 20;    // The thing p points to (namely i!) is now 20! !

    printf("a is %d\n", a);     // prints 20
    printf("a is %d\n", *b);    // "20"! dereference -p is the same as i!

    // Passing Pointers as Arguments
    increment(a);           // a is the int* -- to i

    printf("a is %d\n", a);
    



    return 0;
}