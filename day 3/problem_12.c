#include <stdio.h>

// Function to find GCD (HCF)
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int hcf = gcd(a, b);            // HCF nikal lo
    int lcm = (a * b) / hcf;        // Formula: LCM = (a*b)/HCF

    printf("HCF = %d\n", hcf);
    printf("LCM = %d\n", lcm);

    return 0;
}
