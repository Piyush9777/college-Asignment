#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee e[50];
    int n = 0, choice, id;

    do {
        printf("\n--- Employee Management Menu ---\n");
        printf("1. Add Employee\n2. Display Employees\n3. Search by ID\n4. Exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter ID, Name, Salary: ");
                scanf("%d %s %f", &e[n].id, e[n].name, &e[n].salary);
                n++;
                break;
            case 2:
                for (int i = 0; i < n; i++)
                    printf("%d %s %.2f\n", e[i].id, e[i].name, e[i].salary);
                break;
            case 3:
                printf("Enter ID to search: ");
                scanf("%d", &id);
                for (int i = 0; i < n; i++) {
                    if (e[i].id == id) {
                        printf("%d %s %.2f\n", e[i].id, e[i].name, e[i].salary);
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
