#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char title[50];
    char author[50];
};

int main() {
    struct Book b[50];
    int n = 0, choice, id;

    do {
        printf("\n--- Library Menu ---\n");
        printf("1. Add Book\n2. Display Books\n3. Search by ID\n4. Exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter ID, Title, Author: ");
                scanf("%d %s %s", &b[n].id, b[n].title, b[n].author);
                n++;
                break;
            case 2:
                for (int i = 0; i < n; i++)
                    printf("%d %s %s\n", b[i].id, b[i].title, b[i].author);
                break;
            case 3:
                printf("Enter ID to search: ");
                scanf("%d", &id);
                for (int i = 0; i < n; i++) {
                    if (b[i].id == id) {
                        printf("%d %s %s\n", b[i].id, b[i].title, b[i].author);
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
