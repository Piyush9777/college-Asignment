#include <stdio.h>

int main() {
    int score = 0, ans;

    printf("Q1: Capital of India?\n");
    printf("1. Mumbai  2. Delhi  3. Kolkata  4. Chennai\n");
    scanf("%d", &ans);
    if (ans == 2) score++;

    printf("Q2: 2 + 2 = ?\n");
    printf("1. 3  2. 4  3. 5  4. 6\n");
    scanf("%d", &ans);
    if (ans == 2) score++;

    printf("Q3: Largest planet?\n");
    printf("1. Earth  2. Mars  3. Jupiter  4. Saturn\n");
    scanf("%d", &ans);
    if (ans == 3) score++;

    printf("\nYour Score = %d/3\n", score);
    return 0;
}
