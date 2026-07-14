#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int choice;
    printf("Enter a string: ");
    scanf("%s", str);

    do {
        printf("\n--- String Operations Menu ---\n");
        printf("1. Length\n2. Reverse\n3. Uppercase\n4. Palindrome Check\n5. Exit\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Length = %d\n", (int)strlen(str));
                break;
            case 2: {
                int len = strlen(str);
                for (int i = 0; i < len / 2; i++) {
                    char temp = str[i];
                    str[i] = str[len - i - 1];
                    str[len - i - 1] = temp;
                }
                printf("Reversed string = %s\n", str);
                break;
            }
            case 3:
                for (int i = 0; str[i] != '\0'; i++) str[i] = toupper(str[i]);
                printf("Uppercase string = %s\n", str);
                break;
            case 4: {
                int len = strlen(str), flag = 1;
                for (int i = 0; i < len / 2; i++) {
                    if (str[i] != str[len - i - 1]) { flag = 0; break; }
                }
                if (flag) printf("Palindrome\n"); else printf("Not Palindrome\n");
                break;
            }
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 5);

    return 0;
}
