#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float basic, hra, da, gross;
};

int main() {
    struct Employee e;
    printf("Enter ID, Name, Basic Salary: ");
    scanf("%d %s %f", &e.id, e.name, &e.basic);

    e.hra = 0.2 * e.basic;
    e.da = 0.1 * e.basic;
    e.gross = e.basic + e.hra + e.da;

    printf("\n--- Salary Slip ---\n");
    printf("ID: %d\nName: %s\nBasic: %.2f\nHRA: %.2f\nDA: %.2f\nGross Salary: %.2f\n",
           e.id, e.name, e.basic, e.hra, e.da, e.gross);

    return 0;
}
