#include <stdio.h>

int reverseNumber(int n, int rev) {
    if (n == 0) return rev;   // base case
    return reverseNumber(n / 10, rev * 10 + (n % 10));  // recursive call
}

int main() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    printf("Reversed number = %d", reverseNumber(num, 0));
    return 0;
}
