#include <stdio.h>

// Functions
int addOne(int number){
	return number + 1;
}

int increment(int number){
	number++;
}

void hello(void){
	printf("Hello, I'm sure you are the developer checking my code\n");
}

// Funtion Prototyping
int foo(void);			// A good example of prototyping

int main(void){
	
	printf("Welcome to learning function in C\n");
	printf("==================================\n");

	// Calling the function
	int i = 10;
	int j = addOne(i);		// Call happend here

	printf("i + 1 is %d\n", j);
	
	hello();
	
	// Another example
	int s = 10;
	increment(s);			// returns 10 
	printf("i == %d\n", s);

	// Calling a prototyped function
	int r = foo();
	printf("%d\n", r);





	return 0;
}

int foo(void){
	return 2000;
}
