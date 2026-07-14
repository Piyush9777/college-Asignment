#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) return 0;   // base case
    if (n == 1) return 1;   // base case
    return fibonacci(n - 1) + fibonacci(n - 2);  // recursive relation
}

int main() {
    int terms;
    printf("Enter number of terms: ");
    scanf("%d", &terms);
    printf("Fibonacci series: ");
    for (int i = 0; i < terms; i++) {
        printf("%d ", fibonacci(i));
    }
    return 0;
}
