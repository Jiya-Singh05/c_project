#include <stdio.h>
#include "colors.h"
#include "display.h"

void showBookingDetails(int show,int bookingstatus,int seatnumber,char name[],int timeslot,int ticketprice,int total) {
    if (show == -1) {
        printf("First choose your show\n");
        return;
    }
    if (bookingstatus < 1) {
        printf(RED "No booking found! Please book a seat first.\n");
        return;
    }

    printf(WHITE "Seat %d BOOKED for %s, Time %d:00, TOTAL PAYABLE = Rs.%d\n",
            seatnumber, name, timeslot, total + ticketprice);
}
