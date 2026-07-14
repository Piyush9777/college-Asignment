#include <stdio.h>

struct Ticket {
    int id;
    char name[50];
    int seats;
};

int main() {
    struct Ticket t;
    int available = 50;  // total seats

    printf("Enter Ticket ID, Name, Seats to book: ");
    scanf("%d %s %d", &t.id, t.name, &t.seats);

    if (t.seats <= available) {
        available -= t.seats;
        printf("Booking successful! Remaining seats = %d\n", available);
    } else {
        printf("Not enough seats available!\n");
    }

    return 0;
}
