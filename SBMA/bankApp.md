### Simple Banking System in C

This project involves creating a basic banking system where users can create accounts, deposit money, withdraw money, and check their balance. Below is the code with explanations and ideas for future features.

### **Basic Banking System Program**

```c
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
```

---

### **Explanation of the Program**

1. **Structure Definition:**
   - We define a structure `struct BankAccount` to store the details of a user. It contains the user's name, account number, and balance.

   ```c
   struct BankAccount {
       char name[100];
       int accountNumber;
       float balance;
   };
   ```

2. **Main Function:**
   - The `main()` function drives the program and allows the user to interact with it through a menu. It first calls the `createAccount()` function to create a new user account.
   - The `do-while` loop provides a menu of options where the user can choose to deposit money, withdraw money, check the balance, or exit the system.

   ```c
   int main() {
       struct BankAccount user;
       int choice;
       float amount;

       createAccount(&user);

       do {
           // Display menu and handle user input...
       } while (choice != 4);

       return 0;
   }
   ```

3. **Account Creation:**
   - `createAccount()` is called to set up the user's account. It prompts the user to enter their name and account number, and initializes their balance to zero.

   ```c
   void createAccount(struct BankAccount *account) {
       // Take user input for name and account number...
       account->balance = 0;
   }
   ```

4. **Depositing Money:**
   - `depositMoney()` takes the account and the amount to be deposited. If the amount is positive, it adds the amount to the user’s balance.

   ```c
   void depositMoney(struct BankAccount *account, float amount) {
       if (amount > 0) {
           account->balance += amount;
       }
   }
   ```

5. **Withdrawing Money:**
   - `withdrawMoney()` checks if the requested withdrawal amount is valid (i.e., greater than 0 and less than or equal to the balance). If valid, it subtracts the amount from the balance; otherwise, it gives an appropriate message.

   ```c
   void withdrawMoney(struct BankAccount *account, float amount) {
       if (amount > 0 && amount <= account->balance) {
           account->balance -= amount;
       } else {
           // Handle errors...
       }
   }
   ```

6. **Checking Balance:**
   - `checkBalance()` simply prints the current balance.

   ```c
   void checkBalance(struct BankAccount *account) {
       printf("Current balance: %.2f\n", account->balance);
   }
   ```

---

### **Possible Features to Add**

To make the banking system more advanced, you can implement additional features:

1. **Multiple Accounts:**
   - Allow users to manage multiple accounts. You can use an array of `struct BankAccount` to store multiple user accounts.

2. **PIN Authentication:**
   - Add a simple authentication system where users must enter a correct PIN to access their account.

3. **Transfer Between Accounts:**
   - Implement a feature where users can transfer money between different accounts.

4. **Transaction History:**
   - Keep track of all transactions (deposits, withdrawals, transfers) and allow users to view their transaction history.

5. **Interest Calculation:**
   - Add a feature that calculates interest over time for savings accounts.

6. **Account Locking:**
   - Allow the user to lock or disable their account for security purposes.

7. **File Handling for Persistence:**
   - Save user accounts and their balances to a file, so the data persists between program runs. This will involve reading from and writing to a file.

   ```c
   FILE *file = fopen("accounts.txt", "w"); // To write account data to a file
   ```

8. **Account Types:**
   - Add support for different types of accounts like savings, checking, or business accounts, each with different interest rates or withdrawal limits.

### **Conclusion**

This simple banking system introduces important C programming concepts such as functions, structures, conditional statements, and loops. By working on it and adding more features, you'll strengthen your understanding of C and move closer to mastering it!