#include <stdio.h>
#include "colors.h"
#include "show.h"
#include "booking.h"
#include "food.h"
#include "display.h"

int main() {
    int q=1, choice, show=-1, seatnumber, total=0, bookingstatus=0, ticketprice, timeslot;
    char name[50];

    printf(RED "====== Welcome to SHOW TICKET BOOKING SYSTEM =====\n");

    while(q==1) {
        printf(BLUE "\nMAIN MENU\n");
        printf("1. Choose Show\n");
        printf("2. Available Seats\n");
        printf("3. Book Ticket\n");
        printf("4. Order Food\n");
        printf("5. Show Booking Details\n");
        printf("6. Exit\n");
        scanf("%d", &choice);

        switch(choice) {
            case 1: chooseShow(&show); break;
            case 2: displaySeats(show); break;
            case 3: bookTicket(show,&seatnumber,&ticketprice,&bookingstatus,&timeslot,name); break;
            case 4: orderFood(show,&total); break;
            case 5: showBookingDetails(show,bookingstatus,seatnumber,name,timeslot,ticketprice,total); break;
            case 6: printf(MAGENTA "==== THANK YOU FOR VISITING ====\n"); q=0; break;
            default: printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}
