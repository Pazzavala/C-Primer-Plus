#include <stdio.h>
#include "hotel.h"

int main(int argc, char const *argv[])
{
    int nights;
    double hotel_rate;
    int code;

    while ((code = menu()) != QUIT) {
        switch (code)
        {
        case 1: hotel_rate = HOTEL1;
                break;
        case 2: hotel_rate = HOTEL2;
                break;
        case 3: hotel_rate = HOTEL3;
                break;
        case 4: hotel_rate = HOTEL4;
                break;
        default: hotel_rate = 0.0;
                 printf("Fail");
                 break;
        }

        nights = getnights();
        showprice(hotel_rate, nights);
    }
    printf("Thank you Bye have a good day!");

    return 0;
}

/*
C:\Users\Maria Zavala\Desktop\GitHub\C Primer Plus\9 Functions\Hotel Program>gcc usehotels.c hotel.c

C:\Users\Maria Zavala\Desktop\GitHub\C Primer Plus\9 Functions\Hotel Program>a.exe

************************************************************
Enter the number of the desired hotel:
1) fairfield Arms                2) Hotel Olympic
3) Cherton Plaza                 4) The stockton
5) quit
************************************************************
1
How many nights you need?54
The total cost will be 9720.00.

************************************************************
Enter the number of the desired hotel:
1) fairfield Arms                2) Hotel Olympic
3) Cherton Plaza                 4) The stockton
5) quit
************************************************************
4
How many nights you need?5
The total cost will be 1775.00.

************************************************************
Enter the number of the desired hotel:
1) fairfield Arms                2) Hotel Olympic
3) Cherton Plaza                 4) The stockton
5) quit
************************************************************
1
How many nights you need?43
The total cost will be 7740.00.

************************************************************
Enter the number of the desired hotel:
1) fairfield Arms                2) Hotel Olympic
3) Cherton Plaza                 4) The stockton
5) quit
************************************************************
5
Thank you Bye!
*/
