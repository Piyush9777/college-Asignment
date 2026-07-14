#include <stdio.h>

int main() {
    int n1, n2;
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter %d elements:\n", n1);
    for (int i = 0; i < n1; i++) scanf("%d", &arr1[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter %d elements:\n", n2);
    for (int i = 0; i < n2; i++) scanf("%d", &arr2[i]);

    int unionArr[n1 + n2], size = 0;

    // copy arr1
    for (int i = 0; i < n1; i++) {
        unionArr[size++] = arr1[i];
    }

    // add arr2 elements if not already present
    for (int i = 0; i < n2; i++) {
        int found = 0;
        for (int j = 0; j < size; j++) {
            if (arr2[i] == unionArr[j]) {
                found = 1;
                break;
            }
        }
        if (!found) unionArr[size++] = arr2[i];
    }

    printf("Union of arrays:\n");
    for (int i = 0; i < size; i++) printf("%d ", unionArr[i]);
    return 0;
}
