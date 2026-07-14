#include <stdio.h>
#include <math.h>

int binaryToDecimal(long long n) {
    int decimal = 0, i = 0;
    while (n != 0) {
        int digit = n % 10;
        decimal += digit * pow(2, i);
        n /= 10;
        i++;
    }
    return decimal;
}

int main() {
    long long bin;
    printf("Enter binary number: ");
    scanf("%lld", &bin);
    printf("Decimal: %d", binaryToDecimal(bin));
    return 0;
}
