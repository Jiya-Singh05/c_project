#include <stdio.h>
#include "colors.h"
#include "show.h"

void chooseShow(int *show) {
    printf(YELLOW "Available Shows:\n");
    printf("1. Movie: Thamma\n");
    printf("2. Movie: Kantara\n");
    printf("3. Comedy Show: Kapil Sharma Live\n");
    printf("Select a show (1-3): ");
    scanf("%d", show);

    if (*show < 1 || *show > 3)
        printf("Invalid Option\n");
    else {
        printf("\nYou selected: ");
        if (*show == 1) printf("THAMMA\n");
        if (*show == 2) printf("KANTARA\n");
        if (*show == 3) printf("KAPIL SHARMA LIVE\n");
    }
}

void displaySeats(int show) {
    if (show == -1) {
        printf("First choose your show Please\n");
        return;
    }

    int rows = 5, column = 5, num = 1;
    printf(GREEN "Seats for this show:\n");
    printf("------------------------------------\n");

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < column; j++) {
            printf("%d ", num++);
        }
        printf("\n");
    }
}
