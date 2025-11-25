#include <stdio.h>
#include "colors.h"
#include "booking.h"

void bookTicket(int show, int *seatnumber, int *ticketprice, int *bookingstatus, int *timeslot, char name[]) {
    if (show == -1) {
        printf("First choose your show Please\n");
        return;
    }

    printf("PLEASE SELECT YOUR TIME SLOT:\n");
    printf("09:00 11:00  13:00\n");
    printf("15:00  17:00  18:00\n");
    printf("ENTER YOUR SLOT TIME IN --:00 FORM\n");
    scanf("%d", timeslot);

    if (*timeslot==9||*timeslot==11||*timeslot==13||*timeslot==15||*timeslot==17||*timeslot==18)
        printf("Your seat is booked for the selected time slot\n");
    else {
        printf("PLEASE SELECT A VALID TIME\n");
        return;
    }

    printf("Enter seat number (1-25) for booking:\n");
    printf("(1-19) CLASSIC (Rs.400)\n");
    printf("(20-25) RECLINER (Rs.700)\n");
    scanf("%d", seatnumber);

    if (*seatnumber < 1 || *seatnumber > 25) {
        printf("Invalid seat number!\n");
        return;
    }

    *ticketprice = (*seatnumber >= 1 && *seatnumber <= 19) ? 400 : 700;

    printf("Enter your first name: ");
    scanf("%s", name);

    printf(MAGENTA "Seat Number %d is successfully booked for %s\n", *seatnumber, name);
    *bookingstatus = 1;
}
