#include <stdio.h>

int main() {
    int arr[50], n, choice, key;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    do {
        printf("\n--- Array Operations Menu ---\n");
        printf("1. Display\n2. Search\n3. Reverse\n4. Exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                for (int i = 0; i < n; i++) printf("%d ", arr[i]);
                printf("\n");
                break;
            case 2:
                printf("Enter element to search: ");
                scanf("%d", &key);
                int found = 0;
                for (int i = 0; i < n; i++) {
                    if (arr[i] == key) { printf("Found at index %d\n", i); found = 1; break; }
                }
                if (!found) printf("Not found\n");
                break;
            case 3:
                for (int i = 0, j = n - 1; i < j; i++, j--) {
                    int temp = arr[i]; arr[i] = arr[j]; arr[j] = temp;
                }
                printf("Array reversed!\n");
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
