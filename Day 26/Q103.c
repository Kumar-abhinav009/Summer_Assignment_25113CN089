//Write a program to Create ATM simulation
#include <stdio.h>

int main() {
    float balance = 1000.0; // Initial balance
    int choice;
    float amount;

    printf("Welcome to the ATM!\n");
    printf("Your current balance is: $%.2f\n", balance);

    while (1) {
        printf("\n1. Check Balance\n2. Deposit Money\n3. Withdraw Money\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Your current balance is: $%.2f\n", balance);
                break;
            case 2:
                printf("Enter the amount to deposit: ");
                scanf("%f", &amount);
                if (amount > 0) {
                    balance += amount;
                    printf("Deposit successful. Your new balance is: $%.2f\n", balance);
                } else {
                    printf("Invalid amount. Please enter a positive value.\n");
                }
                break;
            case 3:
                printf("Enter the amount to withdraw: ");
                scanf("%f", &amount);
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    printf("Withdrawal successful. Your new balance is: $%.2f\n", balance);
                } else {
                    printf("Invalid amount or insufficient funds.\n");
                }
                break;
            case 4:
                printf("Thank you for using the ATM. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}