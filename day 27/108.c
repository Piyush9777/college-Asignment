#include <stdio.h>

struct Student {
    int id;
    char name[50];
    int marks[5];
    int total;
    float percentage;
    char grade;
};

int main() {
    struct Student s;
    printf("Enter ID, Name: ");
    scanf("%d %s", &s.id, s.name);

    s.total = 0;
    for (int i = 0; i < 5; i++) {
        printf("Enter marks of subject %d: ", i + 1);
        scanf("%d", &s.marks[i]);
        s.total += s.marks[i];
    }

    s.percentage = s.total / 5.0;

    if (s.percentage >= 75) s.grade = 'A';
    else if (s.percentage >= 60) s.grade = 'B';
    else if (s.percentage >= 50) s.grade = 'C';
    else s.grade = 'D';

    printf("\n--- Marksheet ---\n");
    printf("ID: %d\nName: %s\nTotal: %d\nPercentage: %.2f\nGrade: %c\n",
           s.id, s.name, s.total, s.percentage, s.grade);

    return 0;
}
