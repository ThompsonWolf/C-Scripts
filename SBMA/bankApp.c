#include <stdio.h>
#include <string.h>

// Structure to hold user details
struct BankAccount {
    char name[100];
    int accountNumber;
    float balance;
};

// Function prototypes
void createAccount(struct BankAccount *account);
void depositMoney(struct BankAccount *account, float amount);
void withdrawMoney(struct BankAccount *account, float amount);
void checkBalance(struct BankAccount *account);

int main() {
    struct BankAccount user;
    int choice;
    float amount;

    createAccount(&user); // Create a new bank account for the user

    do {
        // Display menu
        printf("\n===== Banking System Menu =====\n");
        printf("1. Deposit Money\n");
        printf("2. Withdraw Money\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                depositMoney(&user, amount);
                break;
            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                withdrawMoney(&user, amount);
                break;
            case 3:
                checkBalance(&user);
                break;
            case 4:
                printf("Exiting the system. Thank you!\n");
                break;
            default:
                printf("Invalid option, please try again.\n");
        }
    } while (choice != 4);

    return 0;
}

// Function to create an account
void createAccount(struct BankAccount *account) {
    printf("Enter your name: ");
    getchar(); // This clears the buffer from previous input
    fgets(account->name, 100, stdin); // Store the user's name
    account->name[strcspn(account->name, "\n")] = 0; // Remove the newline from the input

    printf("Enter your account number: ");
    scanf("%d", &account->accountNumber); // Store the account number

    account->balance = 0; // Initialize the balance to zero
    printf("Account created successfully!\n");
}

// Function to deposit money
void depositMoney(struct BankAccount *account, float amount) {
    if (amount > 0) {
        account->balance += amount; // Add the deposit amount to the balance
        printf("Deposited %.2f successfully. New balance: %.2f\n", amount, account->balance);
    } else {
        printf("Deposit amount must be positive!\n");
    }
}

// Function to withdraw money
void withdrawMoney(struct BankAccount *account, float amount) {
    if (amount > 0 && amount <= account->balance) {
        account->balance -= amount; // Subtract the withdrawal amount from the balance
        printf("Withdrew %.2f successfully. New balance: %.2f\n", amount, account->balance);
    } else if (amount > account->balance) {
        printf("Insufficient balance! Available balance: %.2f\n", account->balance);
    } else {
        printf("Withdrawal amount must be positive!\n");
    }
}

// Function to check balance
void checkBalance(struct BankAccount *account) {
    printf("Current balance: %.2f\n", account->balance);
}