#include <stdio.h>
#include <math.h>

int main() {
    int n, i, prime = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
        prime = 0; // 0 and 1 are not prime
    } else {
        for (i = 2; i <= n; i++) {
            if (n % i == 0) {
                prime = 0; // divisible by i → not prime
                break;
            }
        }
    }

    if (prime) {
        printf("%d is prime\n", n);
    } else {
        printf("%d is not prime\n", n);
    }

    return 0;
}
