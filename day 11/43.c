#include <stdio.h>

int isPrime(int n) {
    if (n <= 1) return 0;   // not prime
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;       // divisible → not prime
    }
    return 1;               // prime
}

int main() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    if (isPrime(num))
        printf("%d is Prime", num);
    else
        printf("%d is Not Prime", num);
    return 0;
}
