#include <stdio.h>
#include <string.h>

struct Item {
    int id;
    char name[50];
    int quantity;
    float price;
};

int main() {
    struct Item inv[50];
    int n = 0, choice, id;

    do {
        printf("\n--- Inventory Menu ---\n");
        printf("1. Add Item\n2. Display Items\n3. Search by ID\n4. Exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter ID, Name, Quantity, Price: ");
                scanf("%d %s %d %f", &inv[n].id, inv[n].name, &inv[n].quantity, &inv[n].price);
                n++;
                break;
            case 2:
                for (int i = 0; i < n; i++)
                    printf("%d %s %d %.2f\n", inv[i].id, inv[i].name, inv[i].quantity, inv[i].price);
                break;
            case 3:
                printf("Enter ID to search: ");
                scanf("%d", &id);
                for (int i = 0; i < n; i++) {
                    if (inv[i].id == id) {
                        printf("%d %s %d %.2f\n", inv[i].id, inv[i].name, inv[i].quantity, inv[i].price);
                        break;
                    }
                }
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 4);

    return 0;
}
