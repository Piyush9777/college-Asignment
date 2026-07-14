#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    int age;
    float marks;
};

int main() {
    struct Student s[50];
    int n = 0, choice, id;

    do {
        printf("\n--- Student Record Menu ---\n");
        printf("1. Add Student\n2. Display Students\n3. Search by ID\n4. Exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter ID, Name, Age, Marks: ");
                scanf("%d %s %d %f", &s[n].id, s[n].name, &s[n].age, &s[n].marks);
                n++;
                break;
            case 2:
                for (int i = 0; i < n; i++)
                    printf("%d %s %d %.2f\n", s[i].id, s[i].name, s[i].age, s[i].marks);
                break;
            case 3:
                printf("Enter ID to search: ");
                scanf("%d", &id);
                for (int i = 0; i < n; i++) {
                    if (s[i].id == id) {
                        printf("%d %s %d %.2f\n", s[i].id, s[i].name, s[i].age, s[i].marks);
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
