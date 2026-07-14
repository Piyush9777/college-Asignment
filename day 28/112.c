#include <stdio.h>
#include <string.h>

struct Contact {
    int id;
    char name[50];
    char phone[15];
};

int main() {
    struct Contact c[50];
    int n = 0, choice, id;

    do {
        printf("\n--- Contact Menu ---\n");
        printf("1. Add Contact\n2. Display Contacts\n3. Search by ID\n4. Exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter ID, Name, Phone: ");
                scanf("%d %s %s", &c[n].id, c[n].name, c[n].phone);
                n++;
                break;
            case 2:
                for (int i = 0; i < n; i++)
                    printf("%d %s %s\n", c[i].id, c[i].name, c[i].phone);
                break;
            case 3:
                printf("Enter ID to search: ");
                scanf("%d", &id);
                for (int i = 0; i < n; i++) {
                    if (c[i].id == id) {
                        printf("%d %s %s\n", c[i].id, c[i].name, c[i].phone);
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
