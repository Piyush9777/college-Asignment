#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int i = 0;
    while (str[i] != '\0') {
        char ch = str[i];
        int count = 0;
        while (str[i] == ch) {
            count++;
            i++;
        }
        printf("%c%d", ch, count);
    }
    return 0;
}
