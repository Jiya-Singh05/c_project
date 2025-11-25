#include <stdio.h>
#include "colors.h"
#include "food.h"

void orderFood(int show, int *total) {
    if (show == -1) {
        printf("First choose your show Please\n");
        return;
    }   

    int foodChoice, r = 0;
    *total = 0;

    printf(WHITE "===== FOOD & BEVERAGE MENU =====\n");
    printf("1. Basic Popcorn = 100\n");
    printf("2. Cheese Popcorn = 150\n");
    printf("3. Pepsi = 80\n");
    printf("4. Diet Coke = 80\n");
    printf("5. Burger = 150\n");
    printf("6. SPECIAL OFFER (Popcorn + Drink) = 160\n");
    printf("7. Done ordering\n");

    while (r == 0) {
        printf(CYAN "Enter your food choice: ");
        scanf("%d", &foodChoice);

        if (foodChoice == 1) *total += 100;
        else if (foodChoice == 2) *total += 150;
        else if (foodChoice == 3) *total += 80;
        else if (foodChoice == 4) *total += 80;
        else if (foodChoice == 5) *total += 150;
        else if (foodChoice == 6) *total += 160;
        else if (foodChoice == 7) r = 1;
        else printf("INVALID OPTION! TRY AGAIN.\n");
    }
    printf(GREEN "-YOUR ORDER IS PLACED-\n");
    printf(RED "TOTAL FOOD AMOUNT = Rs.%d \n", *total);
}
