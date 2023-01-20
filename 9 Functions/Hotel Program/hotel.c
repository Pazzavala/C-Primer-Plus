#include <stdio.h>
#include "hotel.h"

int menu(void) {
    int code, status;

    printf("\n%s%s\n", STARS, STARS);
    printf("Enter the number of the desired hotel:\n");
    printf("1) fairfield Arms \t\t 2) Hotel Olympic\n");
    printf("3) Cherton Plaza  \t\t 4) The stockton\n");
    printf("5) quit\n");
    printf("%s%s\n", STARS, STARS);

    while ((status = scanf("%d", &code)) != 1 || (code < 1 || code > 5)) {
        if (status != 1)
            scanf("%*s"); // dispose of non int input since scanf leaves things in queue
        printf("Enter an integer form 1 - 5\n");
    }

    return code;
}

int getnights(void) {
    int nights;

    printf("How many nights you need? ");
    while (scanf("%d", &nights) != 1)
    {
        scanf("%*s");
        printf("Enter an integer\n");
    }

    return nights;
}

void showprice(double rate, int nights) {
    int n;
    double total = 0.0;
    double factor = 1.0;

    for (n = 1; n <= nights; n++, factor != DISCOUNT)
        total += rate * factor;

    printf("The total cost will be %0.2f.\n", total);
}