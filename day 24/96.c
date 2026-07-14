#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int freq[256] = {0};
    int j = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (freq[(int)str[i]] == 0) {
            str[j++] = str[i];
            freq[(int)str[i]] = 1;
        }
    }
    str[j] = '\0';

    printf("String after removing duplicates = %s", str);
    return 0;
}
