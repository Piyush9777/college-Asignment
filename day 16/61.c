#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter n (range 1 to n): ");
    scanf("%d", &n);

    int arr[n-1];
    printf("Enter %d elements (1 to n with one missing):\n", n-1);
    for (int i = 0; i < n-1; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    int total = n * (n + 1) / 2;  // sum of 1..n
    int missing = total - sum;
    printf("Missing number = %d", missing);
    return 0;
}
