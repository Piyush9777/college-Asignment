#include <stdio.h>

void reverseString(char str[]) {
    int i = 0, j;
    while (str[i] != '\0') i++;
    j = i - 1;

    for (int k = 0; k < i / 2; k++) {
        char temp = str[k];
        str[k] = str[j - k];
        str[j - k] = temp;
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    reverseString(str);
    printf("Reversed string = %s", str);
    return 0;
}
