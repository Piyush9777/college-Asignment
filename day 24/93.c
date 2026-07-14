#include <stdio.h>
#include <string.h>

int isRotation(char str1[], char str2[]) {
    if (strlen(str1) != strlen(str2)) return 0;

    char temp[200];
    strcpy(temp, str1);
    strcat(temp, str1);  // concatenate str1 with itself

    return strstr(temp, str2) != NULL;  // check if str2 is substring
}

int main() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    if (isRotation(str1, str2))
        printf("Strings are rotations of each other");
    else
        printf("Strings are not rotations");
    return 0;
}
