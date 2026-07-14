#include <stdio.h>

long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);   // recursion
}

int main() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    printf("Factorial of %d = %lld", num, factorial(num));
    return 0;
}
