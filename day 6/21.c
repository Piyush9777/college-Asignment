#include <stdio.h>

void decimalToBinary(int n) {
    int binary[32], i = 0;
    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binary[j]);
}

int main() {
    int num;
    printf("Enter decimal number: ");
    scanf("%d", &num);
    printf("Binary: ");
    decimalToBinary(num);
    return 0;
}
