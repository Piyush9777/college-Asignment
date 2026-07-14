#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    int m = n;  // effective size
    for (int i = 0; i < m; i++) {
        for (int j = i + 1; j < m; j++) {
            if (arr[i] == arr[j]) {
                // shift left
                for (int k = j; k < m - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                m--;  // reduce size
                j--;  // recheck new element at position j
            }
        }
    }

    printf("Array after removing duplicates:\n");
    for (int i = 0; i < m; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
