#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    printf("Enter a sentence: ");
    scanf(" %[^\n]", str);

    int maxLen = 0, currLen = 0;
    char longest[50], word[50];
    int j = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            word[j++] = str[i];
            currLen++;
        } else {
            word[j] = '\0';
            if (currLen > maxLen) {
                maxLen = currLen;
                strcpy(longest, word);
            }
            j = 0;
            currLen = 0;
        }
    }
    word[j] = '\0';
    if (currLen > maxLen) {
        maxLen = currLen;
        strcpy(longest, word);
    }

    printf("Longest word = %s (length %d)", longest, maxLen);
    return 0;
}
