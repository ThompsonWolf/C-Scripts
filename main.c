#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main(void){
   
  /*
  printf("\n==========================================================================\n");
  printf("[!] Hello C\n");
  printf("[!] It's actually my first time writing this long using C.\n");
  printf("[!] It has been really tough learning or grapping it's concept.\n");
  printf("[!] I've been reading books about C, it's actually the official and most popular book of it kind\n");
  printf("[!] I constantly still think of how i can really get better at learning C and doing stuffs with it\n");
  printf("[!] I really want to build stuffs with C in Cryptography, Networking, Cybersecurity and Automations\n");
  printf("==============================================================================");
  */

	int score = 1000;
	//double point = 5.25;
	float population = 99.4;
	char grade = 'A';
	char *name = "Thompson Wolf";		// Char *(*char pointer) is the string type
	bool isEmployed = true;

	printf("The name variable is : %s\n", name);
	printf("The score variable is : %d\n", score);
	printf("The population variable is : %f\n", population);
	printf("The char variable is : %c\n", grade);

	printf("==========================================================\n");
	
	if(isEmployed){
		printf("He is Employed because the condition is true\n");	
	}

	printf("==========================================================\n");
	
	// %zu is the format specifier for type size_t
	
	printf("%zu\n", sizeof (int));
	printf("%zu\n", sizeof (char));
	printf("%zu\n", sizeof (float));
	printf("%zu\n", sizeof (double));
	
	printf("==========================================================\n");
	
	// Flow Control
	// While Example
	int i = 0;
	while(i <= 10){
		printf("while: i is %d\n", i);
		i++;
	}
	
	printf("==========================================================\n");
	
	// Do While loop example
	int q = 10;
	
	do{
		printf("Do-While: i is %d\n", q);
		q++;
	} while(q <= 10);
	
	printf("All done!\n");
	
	// Using the rand function to generate numbers
	int randomNumber;
	
	do{
		randomNumber = rand() % 1000;		// Get a random number between 0 and 99
		printf("%d\n", randomNumber);
	} while (randomNumber != 37);			// Repeat untill 37 comes up


	// For Loop 
	int z;
	
	for(z = 0; z < 10; z++){
		printf("z is %d\n", z);
	}
	
	// Switch Statement
	int headCount = 2;
	
	switch(headCount){
		case 0:
			printf("You have no count.\n");
			break;
		case 1:
			printf("You have 1 count.\n");
			break;
		case 2:
			printf("You have 3 count.\n");
			break;
		default:
			printf("You have a big buns of head!!!!!!!.\n");
			break;
	}
	printf("==========================================================\n");
	
	



  return 0;
}
