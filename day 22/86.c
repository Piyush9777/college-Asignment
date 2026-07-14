#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    printf("Enter a sentence: ");
    scanf(" %[^\n]", str);  // read full line including spaces

    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0')
            count++;
    }
    count++;  // last word

    printf("Word count = %d", count);
    return 0;
}
