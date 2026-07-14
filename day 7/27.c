#include <stdio.h>

int sumOfDigits(int n) {
    if (n == 0) return 0;   // base case
    return (n % 10) + sumOfDigits(n / 10);  // recursive call
}

int main() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    printf("Sum of digits = %d", sumOfDigits(num));
    return 0;
}
