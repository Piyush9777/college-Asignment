#include <stdio.h>

int main() {
    int balance = 10000, choice, amount;

    do {
        printf("\n--- ATM Menu ---\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Balance = %d\n", balance);
                break;
            case 2:
                printf("Enter deposit amount: ");
                scanf("%d", &amount);
                balance += amount;
                printf("Deposited successfully!\n");
                break;
            case 3:
                printf("Enter withdraw amount: ");
                scanf("%d", &amount);
                if (amount <= balance) {
                    balance -= amount;
                    printf("Withdrawn successfully!\n");
                } else {
                    printf("Insufficient balance!\n");
                }
                break;
            case 4:
                printf("Thank you for using ATM!\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 4);

    return 0;
}
