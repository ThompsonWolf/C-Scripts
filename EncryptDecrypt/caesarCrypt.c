#include <stdio.h>

// This program is meant to encrypt and decrypt data using a key

// a function encrypt was created and took 2 parameters (message and key)
void encrypt(char *message, int key) {
    // there was loop to iterate through each character of the message from one step to another
    // N.B: Message will obtained from the user input while running the program
    for (int i = 0; message[i] != '\0'; ++i) {
        char ch = message[i];
        // Declare a condition that says if character obtained is greaer than 'a' and another character is greater 'z'
        if (ch >= 'a' && ch <= 'z') {
            // The character should be added with the key obtained from the user input from the program when runned
            ch = ch + key;
            // Then run a condition that checks if the character greater than 'z' again
            if (ch > 'z') {
                // Then shift each character in the given message backward
                ch = ch - 'z' + 'a' - 1;
            }
            // This made up the encrypted message
            message[i] = ch;
            // This aspect of the code till the end of the function does the vice versa of the if statement
        } else if (ch >= 'A' && ch <= 'Z') {
            ch = ch + key;
            if (ch > 'Z') {
                ch = ch - 'Z' + 'A' - 1;
            }
            message[i] = ch;
        }
    }
}

// a function dencrypt was created and took 2 parameters (message and key)
// This function also did exact vice versa of the encrypt function using the message and key obtained from the user
void decrypt(char *message, int key) {
    for (int i = 0; message[i] != '\0'; ++i) {
        char ch = message[i];
        if (ch >= 'a' && ch <= 'z') {
            ch = ch - key;
            if (ch < 'a') {
                ch = ch + 'z' - 'a' + 1;
            }
            message[i] = ch;
        } else if (ch >= 'A' && ch <= 'Z') {
            ch = ch - key;
            if (ch < 'A') {
                ch = ch + 'Z' - 'A' + 1;
            }
            message[i] = ch;
        }
    }
}

// The usage
int main() {
    // Taking in the message character and key from the user
    char message[100];
    int key;

    // I know i suck at taking in strings :) in C language. Who can help me with my line 62 for goodness sake
    printf("Enter a message to encrypt: ");
    scanf("%s", message);
    printf("Enter key: ");
    scanf("%d", &key);

    encrypt(message, key);
    printf("Encrypted message: %s\n", message);

    decrypt(message, key);
    printf("Decrypted message: %s\n", message);

    // The program just run right i hope :)
    return 0;
}
