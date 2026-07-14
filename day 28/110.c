#include <stdio.h>

struct Account {
    int accNo;
    char name[50];
    float balance;
};

int main() {
    struct Account a;
    int choice, amount;

    printf("Enter Account No, Name, Balance: ");
    scanf("%d %s %f", &a.accNo, a.name, &a.balance);

    do {
        printf("\n--- Bank Menu ---\n");
        printf("1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Balance = %.2f\n", a.balance);
                break;
            case 2:
                printf("Enter deposit amount: ");
                scanf("%d", &amount);
                a.balance += amount;
                printf("Deposited successfully!\n");
                break;
            case 3:
                printf("Enter withdraw amount: ");
                scanf("%d", &amount);
                if (amount <= a.balance) {
                    a.balance -= amount;
                    printf("Withdrawn successfully!\n");
                } else {
                    printf("Insufficient balance!\n");
                }
                break;
            case 4:
                printf("Thank you!\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 4);

    return 0;
}
