#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    int index = 0;
    // move non-zero elements forward
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[index++] = arr[i];
        }
    }
    // fill remaining with zeroes
    while (index < n) {
        arr[index++] = 0;
    }

    printf("Array after moving zeroes to end:\n");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}
