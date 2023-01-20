#include <stdio.h>

int main() {

    int guess = 1;
    char response;

    printf("if i guess your number respond y else n if wrong.\n");
    printf("Is your number %d\n", guess);

    while ((response = getchar()) != 'y') {

        if (response == 'n') 
            printf("Is your number %d\n", ++guess);
        else
            printf("Invalid input please type n or y: ");

        while (getchar() != '\n');
            continue;
    }

    printf("GOT IT!!");
    
    return 0;
}