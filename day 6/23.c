#include <stdio.h>

int countSetBits(int n) {
    int count = 0;
    while (n) {
        count += n & 1;  // check last bit
        n >>= 1;         // right shift
    }
    return count;
}

int main() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    printf("Set bits: %d", countSetBits(num));
    return 0;
}
